/*
 * RadioButtonAutomationPeer.cs.
 *
 * Contact:
 *   Moonlight List (moonlight-list@lists.ximian.com)
 *
 * Copyright 2009 Novell, Inc. (http://www.novell.com)
 *
 * See the LICENSE file included with the distribution for details.
 *
 */

using System;
using System.Windows.Automation;
using System.Windows.Automation.Provider;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;

namespace System.Windows.Automation.Peers
{
	public class RadioButtonAutomationPeer : ToggleButtonAutomationPeer,
		ISelectionItemProvider
	{
		public RadioButtonAutomationPeer (RadioButton owner)
			: base (owner)
		{
			isSelected = owner.IsChecked == true;
			owner.Checked += RadioButton_IsSelectedChanged;
			owner.Unchecked += RadioButton_IsSelectedChanged;
		}

		public override object GetPattern (PatternInterface patternInterface)
		{
			if (patternInterface == PatternInterface.SelectionItem)
				return this;
			else if (patternInterface == PatternInterface.Toggle)
				// Mirrors the SL implementation
				return null;
			return base.GetPattern (patternInterface);
		}

		protected override string GetClassNameCore ()
		{
			return "RadioButton";
		}

		protected override AutomationControlType GetAutomationControlTypeCore ()
		{
			return AutomationControlType.RadioButton;
		}

		#region ISelectionItemProvider implementation

		void ISelectionItemProvider.AddToSelection ()
		{
			throw new InvalidOperationException ();
		}

		void ISelectionItemProvider.RemoveFromSelection ()
		{
			RadioButton radioButton = (RadioButton) Owner;
			if (radioButton.IsChecked == true)
				throw new InvalidOperationException ();
		}

		void ISelectionItemProvider.Select ()
		{
			RadioButton radioButton = (RadioButton) Owner;
			if (!radioButton.IsEnabled)
				throw new ElementNotEnabledException ();

			radioButton.IsChecked = true;
		}

		bool ISelectionItemProvider.IsSelected {
			get { return ((RadioButton) Owner).IsChecked == true; }
		}

		IRawElementProviderSimple ISelectionItemProvider.SelectionContainer {
			get { return null; }
		}

		#endregion

		private void RadioButton_IsSelectedChanged (object sender, RoutedEventArgs args)
		{
			RaisePropertyChangedEvent (SelectionItemPatternIdentifiers.IsSelectedProperty,
			                           isSelected,
						   ((ISelectionItemProvider) this).IsSelected);
			isSelected = ((RadioButton) Owner).IsChecked == true;
		}

		private bool isSelected;
	}
}
