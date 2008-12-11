//
// Thumb Unit Tests
//
// Contact:
//   Moonlight List (moonlight-list@lists.ximian.com)
//
// Copyright 2008 Novell, Inc.
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
// 
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

using System;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Input;
using System.Windows.Markup;
using System.Windows.Media;

using Mono.Moonlight.UnitTesting;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace MoonTest.System.Windows.Controls.Primitives {

	[TestClass]
	public class ThumbTest {

		[TestMethod]
		public void DefaultProperties ()
		{
			Thumb t = new Thumb ();
			// default properties on Thumb
			Assert.IsFalse (t.IsDragging, "IsDragging");
			Assert.IsFalse (t.IsFocused, "IsFocused");

			// default properties on Control...
			ControlTest.CheckDefaultProperties (t);
		}

		[TestMethod]
		[MoonlightBug]
		public void DefaultMethods ()
		{
			Thumb t = new Thumb ();
			t.CancelDrag ();
			t.OnApplyTemplate ();
			ControlTest.CheckDefaultMethods (t);
		}

		[TestMethod]
		public void Events ()
		{
			Thumb t = new Thumb ();
			t.DragStarted += delegate (object sender, DragStartedEventArgs e) {
				throw new InvalidOperationException ("DragStarted");
			};
			t.DragDelta += delegate (object sender, DragDeltaEventArgs e) {
				throw new InvalidOperationException ("DragDelta");
			};
			t.DragCompleted += delegate (object sender, DragCompletedEventArgs e) {
				throw new InvalidOperationException ("DragCompleted");
			};
			t.CancelDrag ();
		}

		[TestMethod]
		[MoonlightBug ("should work once templates are applied")]
		public void MinimalXaml ()
		{
			Canvas c = (Canvas) XamlReader.Load (@"
<Canvas xmlns=""http://schemas.microsoft.com/client/2007"" xmlns:x=""http://schemas.microsoft.com/winfx/2006/xaml"">
       <Thumb/>
</Canvas>");
			Thumb t = c.Children [0] as Thumb;

			Assert.IsNotNull (t.Background, "Background");
			Assert.IsTrue (t.Background is SolidColorBrush, "Background/SolidColorBrush");
			Assert.AreEqual ("#FF1F3B53", (t.Background as SolidColorBrush).Color.ToString (), "Background.Color");
			Assert.IsNotNull (t.BorderBrush, "BorderBrush");
			Assert.IsTrue (t.BorderBrush is LinearGradientBrush, "BorderBrush/LinearGradientBrush");

			Assert.AreEqual (new Thickness (1, 1, 1, 1), t.BorderThickness, "BorderThickness");
			Assert.IsNotNull (t.FontFamily, "FontFamily");
			Assert.AreEqual (FontStretches.Normal, t.FontStretch, "FontStretch");
			Assert.AreEqual (FontStyles.Normal, t.FontStyle, "FontStyle");
			Assert.AreEqual (FontWeights.Normal, t.FontWeight, "FontWeight");
// FIXME: default is null right now
//			Assert.IsNotNull (t.Foreground, "Foreground");
//			Assert.IsTrue (t.Foreground is SolidColorBrush, "Foreground/SolidColorBrush");
//			Assert.AreEqual (Colors.Black, (t.Foreground as SolidColorBrush).Color, "Foreground.Color");
			Assert.AreEqual (HorizontalAlignment.Center, t.HorizontalContentAlignment, "HorizontalContentAlignment");
			Assert.IsTrue (t.IsEnabled, "IsEnabled");
			Assert.IsFalse (t.IsTabStop, "IsTabStop");
			Assert.AreEqual (new Thickness (0, 0, 0, 0), t.Padding, "Padding");
			Assert.AreEqual (Int32.MaxValue, t.TabIndex, "AreEqual");
			Assert.AreEqual (KeyboardNavigationMode.Local, t.TabNavigation, "TabNavigation");
			Assert.IsNotNull (t.Template, "Template");
			Assert.AreEqual (typeof (Thumb), (t.Template as ControlTemplate).TargetType, "Template/TargetType");
			Assert.AreEqual (VerticalAlignment.Center, t.VerticalContentAlignment, "VerticalContentAlignment");

			FrameworkElementTest.CheckDefaultProperties (t, c);
		}
	}
}
