/** 
 * Boilerplate implementation instructions.
 * 
 * Read the GObject Tutorial and follow the given directions.
 *
 * @see http://syscall.org/doku.php/gobjectutorial/start 
 * @see http://irrepupavel.com/documents/gtk/gobject-faq.html
 * @see http://developer.gnome.org/gobject/stable/
 * @see http://article.gmane.org/gmane.comp.gnome.gtk%2B.devel.general/6329 (mostly out of date)
 *
 * @todo Directions:
 * 1. Save a copy of this file (named for the type) into the src folder.
 * 2. Replace "BAR" with TYPE, "Bar" with Type, and "bar" with type, declare a class called Type.
 * 3. Replace "header" with the file name from step 1.
 * 4. Search for all @todo items.
 * 5. Remove this comment.
 */
/*
 * Copyright (C) 2012 The CompilerKit contributors.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
#include "CompilerKit/header.h"
#define COMPILERKIT_BAR_GET_PRIVATE(obj) (G_TYPE_INSTANCE_GET_PRIVATE ((obj), COMPILERKIT_TYPE_BAR, CompilerKitBarPrivate))
G_DEFINE_TYPE(CompilerKitBar, compilerkit_bar, G_TYPE_OBJECT);

/** @todo Private method function prototypes go here (for private methods, declare as static) */
static void compilerkit_bar_finalize (GObject* object);
static void compilerkit_bar_dispose (GObject* object);

struct _CompilerKitBarPrivate
{
/** @todo Declare private members here */
};

static void
compilerkit_bar_class_init (CompilerKitBarClass *klass)
{
  GObjectClass *g_object_class;
  
  /* Add private structure */
  g_type_class_add_private (klass, sizeof (CompilerKitBarPrivate));
  
  /* Get the parent gobject class */
  g_object_class = G_OBJECT_CLASS(klass);
  
  /** @todo Hook overridable methods */
  // klass->method = method_implementation;
  
  /* Hook finalization functions */
  g_object_class->dispose = compilerkit_bar_dispose;   /* instance destructor, reverse of init */
  g_object_class->finalize = compilerkit_bar_finalize; /* class finalization, reverse of class init */
}

static void
compilerkit_bar_init (CompilerKitBar *self)
{
  CompilerKitBarPrivate *priv;

  self->priv = priv = COMPILERKIT_BAR_GET_PRIVATE (self);

  /** @todo Initialize public fields */
  // self->public_field = some_value;

  /** @todo Initialize private fields */
  // priv->member = whatever;
}

CompilerKitBar* compilerkit_bar_new (void)
{
	return COMPILERKIT_BAR (g_object_new (COMPILERKIT_TYPE_BAR, NULL));
}

static void
compilerkit_bar_finalize (GObject* object)
{
	/* Reverse what was allocated by class init */
	G_OBJECT_CLASS (compilerkit_bar_parent_class)->finalize (object);
}

static void
compilerkit_bar_dispose (GObject* object)
{
  /* Reverse what was allocated by instance init */

  CompilerKitBar *self = COMPILERKIT_BAR (object);
  CompilerKitBarPrivate* priv;

  priv = COMPILERKIT_BAR_GET_PRIVATE (self);
  
  /** @todo Deallocate memory as necessary */

  G_OBJECT_CLASS (compilerkit_bar_parent_class)->dispose (object);
}