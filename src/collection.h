/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * collection.h: different types of collections
 *
 * Copyright 2007 Novell, Inc. (http://www.novell.com)
 *
 * See the LICENSE file included with the distribution for details.
 * 
 */

#ifndef __MOON_COLLECTION_H__
#define __MOON_COLLECTION_H__

#include <glib.h>

#include "dependencyobject.h"
#include "eventargs.h"
#include "point.h"

class CollectionIterator;

//
// Collection: provides a collection that we can monitor for
// changes.   We expose this collection in a few classes to
// the managed world, and when a change happens we get a
// chance to reflect the changes
//
/* @Namespace=System.Windows */
/* @ManagedName=PresentationFrameworkCollection`1 */
/* @ManagedDependencyProperties=Manual */
class Collection : public DependencyObject {
public:
 	/* @PropertyType=gint32,DefaultValue=0,GenerateAccessors */
	static DependencyProperty *CountProperty;
	
	virtual Type::Kind GetObjectType () = 0;
	
	/* @GenerateCBinding,GeneratePInvoke */
	virtual Type::Kind GetElementType () = 0;
	
	int Generation () { return generation; }
	GPtrArray *Array () { return array; }

	/* @GenerateCBinding,GeneratePInvoke */
	virtual CollectionIterator *GetIterator ();

	/* @GenerateCBinding,GeneratePInvoke */
	virtual int GetCount ();
	
	int Add (Value value);
	/* @GenerateCBinding,GeneratePInvoke */
	virtual int Add (Value *value);
	
	/* @GenerateCBinding,GeneratePInvoke */
	virtual bool Clear ();
	
	/* @GenerateCBinding,GeneratePInvoke */
	bool Contains (Value *value);
	/* @GenerateCBinding,GeneratePInvoke */
	int IndexOf (Value *value);
	
	bool Insert (int index, Value value);
	/* @GenerateCBinding,GeneratePInvoke */
	virtual bool Insert (int index, Value *value);
	
	bool Remove (Value value);
	/* @GenerateCBinding,GeneratePInvoke */
	virtual bool Remove (Value *value);
	
	bool RemoveAt (int index);
	
	bool SetValueAt (int index, Value *value);
	Value *GetValueAt (int index);
	
	/* @GenerateCBinding,GeneratePInvoke,Version=2.0 */
	Value *GetValueAtWithError (int index, MoonError *error);
	/* @GenerateCBinding,GeneratePInvoke,Version=2.0 */
	bool SetValueAtWithError (int index, Value *value, MoonError *error);
	/* @GenerateCBinding,GeneratePInvoke,Version=2.0 */
	bool RemoveAtWithError (int index, MoonError *error);

protected:
	GPtrArray *array;
	int generation;
	
	void EmitChanged (CollectionChangedAction action, Value *new_value, Value *old_value, int index);
	
	virtual bool CanAdd (Value *value);
	virtual void AddedToCollection (Value *value) {}
	virtual void RemovedFromCollection (Value *value) {}
	
	void SetCount (int count);
	
	Collection ();
	virtual ~Collection ();
	virtual void Dispose ();
	
};

/* @Namespace=None */
class DependencyObjectCollection : public Collection {
public:
	/* @GenerateCBinding,GeneratePInvoke */
	DependencyObjectCollection () {}
	
	virtual Type::Kind GetObjectType () { return Type::DEPENDENCY_OBJECT_COLLECTION; }
	virtual Type::Kind GetElementType () { return Type::DEPENDENCY_OBJECT; }
	
	virtual void SetSurface (Surface *surface);
	
	virtual void OnSubPropertyChanged (DependencyProperty *prop, DependencyObject *obj, PropertyChangedEventArgs *args);
	virtual void UnregisterAllNamesRootedAt (NameScope *from_ns);
	virtual void RegisterAllNamesRootedAt (NameScope *to_ns);
	
	void MergeNames (DependencyObject *new_obj);

protected:
	virtual bool CanAdd (Value *value);
	virtual void AddedToCollection (Value *value);
	virtual void RemovedFromCollection (Value *value);
	
	virtual ~DependencyObjectCollection () {}
};

/* @Namespace=System.Windows.Media */
class DoubleCollection : public Collection {
public:
	/* @GenerateCBinding,GeneratePInvoke */
	DoubleCollection () {}
	
	virtual Type::Kind GetObjectType () { return Type::DOUBLE_COLLECTION; }
	virtual Type::Kind GetElementType () { return Type::DOUBLE; }

	static DoubleCollection* FromStr (const char *str);

protected:
	virtual ~DoubleCollection () {}
};

/* @Namespace=System.Windows.Media */
class PointCollection : public Collection {
public:
	/* @GenerateCBinding,GeneratePInvoke */
	PointCollection () {}
	
	virtual Type::Kind GetObjectType () { return Type::POINT_COLLECTION; }
	virtual Type::Kind GetElementType () { return Type::POINT; }

	static PointCollection* FromStr (const char *str);

protected:
	virtual ~PointCollection () {}
};

class CollectionIterator {
public:
	CollectionIterator (Collection *c);
	~CollectionIterator ();

	/* @GenerateCBinding,GeneratePInvoke */
	int Next ();

	/* @GenerateCBinding,GeneratePInvoke */
	bool Reset ();

	/* @GenerateCBinding,GeneratePInvoke */
	Value* GetCurrent (int *error);

	/* @GenerateCBinding,GeneratePInvoke */
	static void Destroy (CollectionIterator *iterator);

private:
	Collection *collection;
	int generation;
	int index;
};

enum ContentWalkerDirection {
	Logical,
	ZForward,
	ZReverse
};

class ContentWalker {
public:
	ContentWalker (DependencyObject *obj, ContentWalkerDirection direction = Logical);

	~ContentWalker ();

	DependencyObject *Step ();
	int GetCount ();

protected:
	DependencyObject *content;
	Collection *collection;
	int index;
	ContentWalkerDirection direction;
};

/* @Namespace=System.Windows */
class TriggerCollection : public DependencyObjectCollection {
 protected:
	virtual ~TriggerCollection () {}
	
 public:
	/* @GenerateCBinding,GeneratePInvoke */
	TriggerCollection () {}
	
	virtual Type::Kind GetObjectType () { return Type::TRIGGER_COLLECTION; }
	virtual Type::Kind GetElementType () { return Type::EVENTTRIGGER; }
};

/* @Namespace=System.Windows */
class TriggerActionCollection : public DependencyObjectCollection {
 protected:
	virtual ~TriggerActionCollection () {}

 public:
	/* @GenerateCBinding,GeneratePInvoke */
	TriggerActionCollection () {}
	
	virtual Type::Kind GetObjectType () { return Type::TRIGGERACTION_COLLECTION; }
	/* this may seem wrong, but it's what the TriggerActionCollection mandates */
	virtual Type::Kind GetElementType () { return Type::BEGINSTORYBOARD; }
};

/* @Namespace=System.Windows.Documents */
class InlineCollection : public DependencyObjectCollection {
 protected:
	virtual ~InlineCollection () {}
	
 public:
	/* @GenerateCBinding,GeneratePInvoke */
	InlineCollection () {}
	
	virtual Type::Kind GetObjectType () { return Type::INLINE_COLLECTION; }
	virtual Type::Kind GetElementType () { return Type::INLINE; }
};

/* @Namespace=System.Windows.Controls */
class UIElementCollection : public DependencyObjectCollection {
 protected:
	virtual ~UIElementCollection ();
	
 public:
	GPtrArray *z_sorted;
	
	/* @GenerateCBinding,GeneratePInvoke */
	UIElementCollection ();
	
	virtual Type::Kind GetObjectType () { return Type::UIELEMENT_COLLECTION; }
	virtual Type::Kind GetElementType () { return Type::UIELEMENT; }
	
	virtual bool Clear ();
	
	void ResortByZIndex ();
};

G_BEGIN_DECLS

Collection *collection_new (Type::Kind kind);

G_END_DECLS

#endif /* __MOON_COLLECTION_H__ */
