/*
 * Automatically generated, do not edit this file directly
 */

#ifndef __MOONLIGHT_C_BINDING_H__
#define __MOONLIGHT_C_BINDING_H__

#include <glib.h>
// This should probably be changed to somehow not include c++ headers.
#include "animation.h"
#include "animation2.h"
#include "application.h"
#include "binding.h"
#include "bitmapimage.h"
#include "border.h"
#include "brush.h"
#include "canvas.h"
#include "clock.h"
#include "collection.h"
#include "contentcontrol.h"
#include "control.h"
#include "deepzoomimagetilesource.h"
#include "dependencyobject.h"
#include "dependencyproperty.h"
#include "deployment.h"
#include "downloader.h"
#include "eventargs.h"
#include "frameworkelement.h"
#include "geometry.h"
#include "grid.h"
#include "keyboard.h"
#include "media.h"
#include "mediaelement.h"
#include "multiscaleimage.h"
#include "multiscalesubimage.h"
#include "panel.h"
#include "popup.h"
#include "resources.h"
#include "runtime.h"
#include "shape.h"
#include "size.h"
#include "style.h"
#include "stylus.h"
#include "template.h"
#include "text.h"
#include "textbox.h"
#include "tilesource.h"
#include "transform.h"
#include "trigger.h"
#include "type.h"
#include "uielement.h"
#include "usercontrol.h"
#include "window.h"
#include "window-gtk.h"
#include "xaml.h"
#include "xap.h"

G_BEGIN_DECLS

/**
 * Application
 **/
/* @GeneratePInvoke */
Application *application_new (void);

/* @GeneratePInvoke */
Application *application_get_current (void);

/* @GeneratePInvoke */
Surface *application_get_surface (Application *instance);

/* @GeneratePInvoke */
void application_register_callbacks (Application *instance, ApplyDefaultStyleCallback apply_default_style_cb, ApplyStyleCallback apply_style_cb, GetResourceCallback get_resource_cb);

/* @GeneratePInvoke */
void application_set_current (Application *current);

/* @GeneratePInvoke */
void application_set_surface (Application *instance, Surface *value);

/**
 * ArcSegment
 **/
/* @GeneratePInvoke */
ArcSegment *arc_segment_new (void);

/**
 * AssemblyPart
 **/
/* @GeneratePInvoke */
AssemblyPart *assembly_part_new (void);

/**
 * AssemblyPartCollection
 **/
/* @GeneratePInvoke */
AssemblyPartCollection *assembly_part_collection_new (void);

/**
 * BeginStoryboard
 **/
/* @GeneratePInvoke */
BeginStoryboard *begin_storyboard_new (void);

/**
 * BezierSegment
 **/
/* @GeneratePInvoke */
BezierSegment *bezier_segment_new (void);

/**
 * Binding
 **/
/* @GeneratePInvoke */
Binding *binding_new (void);

/* @GeneratePInvoke */
BindingMode binding_get_binding_mode (Binding *instance);

/* @GeneratePInvoke */
bool binding_get_is_sealed (Binding *instance);

/* @GeneratePInvoke */
bool binding_get_notify_on_validation_error (Binding *instance);

/* @GeneratePInvoke */
char *binding_get_property_path (Binding *instance);

/* @GeneratePInvoke */
bool binding_get_validates_on_exceptions (Binding *instance);

/* @GeneratePInvoke */
void binding_set_binding_mode (Binding *instance, BindingMode mode);

/* @GeneratePInvoke */
void binding_set_is_sealed (Binding *instance, bool isSealed);

/* @GeneratePInvoke */
void binding_set_notify_on_validation_error (Binding *instance, bool value);

/* @GeneratePInvoke */
void binding_set_property_path (Binding *instance, const char *path);

/* @GeneratePInvoke */
void binding_set_validates_on_exceptions (Binding *instance, bool value);

/**
 * BindingExpression
 **/
/* @GeneratePInvoke */
BindingExpression *binding_expression_new (void);

/**
 * BindingExpressionBase
 **/
/* @GeneratePInvoke */
Binding *binding_expression_base_get_binding (BindingExpressionBase *instance);

/* @GeneratePInvoke */
const Value *binding_expression_base_get_converter (BindingExpressionBase *instance);

/* @GeneratePInvoke */
const char *binding_expression_base_get_converter_culture (BindingExpressionBase *instance);

/* @GeneratePInvoke */
const Value *binding_expression_base_get_converter_parameter (BindingExpressionBase *instance);

/* @GeneratePInvoke */
DependencyObject *binding_expression_base_get_source (BindingExpressionBase *instance);

/* @GeneratePInvoke */
FrameworkElement *binding_expression_base_get_target (BindingExpressionBase *instance);

/* @GeneratePInvoke */
DependencyProperty *binding_expression_base_get_target_property (BindingExpressionBase *instance);

/* @GeneratePInvoke */
Value *binding_expression_base_get_value (BindingExpressionBase *instance);

/* @GeneratePInvoke */
void binding_expression_base_register_managed_overrides (BindingExpressionBase *instance, GetValueCallback gv_callback, SetValueCallback sv_callback);

/* @GeneratePInvoke */
void binding_expression_base_set_binding (BindingExpressionBase *instance, Binding *binding);

/* @GeneratePInvoke */
void binding_expression_base_set_converter (BindingExpressionBase *instance, Value *converter);

/* @GeneratePInvoke */
void binding_expression_base_set_converter_culture (BindingExpressionBase *instance, const char *culture);

/* @GeneratePInvoke */
void binding_expression_base_set_converter_parameter (BindingExpressionBase *instance, Value *param);

/* @GeneratePInvoke */
void binding_expression_base_set_source (BindingExpressionBase *instance, DependencyObject *source);

/* @GeneratePInvoke */
void binding_expression_base_set_target (BindingExpressionBase *instance, FrameworkElement *target);

/* @GeneratePInvoke */
void binding_expression_base_set_target_property (BindingExpressionBase *instance, DependencyProperty *property);

/* @GeneratePInvoke */
void binding_expression_base_update_source (BindingExpressionBase *instance, Value *value);

/**
 * BitmapImage
 **/
/* @GeneratePInvoke */
BitmapImage *bitmap_image_new (void);

/* @GeneratePInvoke */
void bitmap_image_set_buffer (BitmapImage *instance, gpointer buffer, int size);

/**
 * Border
 **/
/* @GeneratePInvoke */
Border *border_new (void);

/**
 * Brush
 **/
/* @GeneratePInvoke */
Brush *brush_new (void);

/**
 * Canvas
 **/
/* @GeneratePInvoke */
Canvas *canvas_new (void);

/**
 * Collection
 **/
/* @GeneratePInvoke */
int collection_add_with_error (Collection *instance, Value *value, MoonError *error);

/* @GeneratePInvoke */
bool collection_clear (Collection *instance);

/* @GeneratePInvoke */
bool collection_contains (Collection *instance, Value *value);

/* @GeneratePInvoke */
int collection_get_count (Collection *instance);

/* @GeneratePInvoke */
Type::Kind collection_get_element_type (Collection *instance);

/* @GeneratePInvoke */
CollectionIterator *collection_get_iterator (Collection *instance);

/* @GeneratePInvoke */
Value *collection_get_value_at_with_error (Collection *instance, int index, MoonError *error);

/* @GeneratePInvoke */
int collection_index_of (Collection *instance, Value *value);

/* @GeneratePInvoke */
bool collection_insert_with_error (Collection *instance, int index, Value *value, MoonError *error);

/* @GeneratePInvoke */
bool collection_remove (Collection *instance, Value *value);

/* @GeneratePInvoke */
bool collection_remove_at_with_error (Collection *instance, int index, MoonError *error);

/* @GeneratePInvoke */
bool collection_set_value_at_with_error (Collection *instance, int index, Value *value, MoonError *error);

/**
 * CollectionChangedEventArgs
 **/
/* @GeneratePInvoke */
CollectionChangedEventArgs *collection_changed_event_args_new (void);

/* @GeneratePInvoke */
CollectionChangedAction collection_changed_event_args_get_changed_action (CollectionChangedEventArgs *instance);

/* @GeneratePInvoke */
int collection_changed_event_args_get_index (CollectionChangedEventArgs *instance);

/* @GeneratePInvoke */
Value *collection_changed_event_args_get_new_item (CollectionChangedEventArgs *instance);

/* @GeneratePInvoke */
Value *collection_changed_event_args_get_old_item (CollectionChangedEventArgs *instance);

/* @GeneratePInvoke */
void collection_changed_event_args_set_changed_action (CollectionChangedEventArgs *instance, CollectionChangedAction action);

/* @GeneratePInvoke */
void collection_changed_event_args_set_index (CollectionChangedEventArgs *instance, int index);

/* @GeneratePInvoke */
void collection_changed_event_args_set_new_item (CollectionChangedEventArgs *instance, Value *item);

/* @GeneratePInvoke */
void collection_changed_event_args_set_old_item (CollectionChangedEventArgs *instance, Value *item);

/**
 * CollectionIterator
 **/
/* @GeneratePInvoke */
void collection_iterator_destroy (CollectionIterator *iterator);

/* @GeneratePInvoke */
Value *collection_iterator_get_current (CollectionIterator *instance, int *error);

/* @GeneratePInvoke */
int collection_iterator_next (CollectionIterator *instance);

/* @GeneratePInvoke */
bool collection_iterator_reset (CollectionIterator *instance);

/**
 * ColorAnimation
 **/
/* @GeneratePInvoke */
ColorAnimation *color_animation_new (void);

/**
 * ColorAnimationUsingKeyFrames
 **/
/* @GeneratePInvoke */
ColorAnimationUsingKeyFrames *color_animation_using_key_frames_new (void);

/**
 * ColorKeyFrame
 **/
/* @GeneratePInvoke */
ColorKeyFrame *color_key_frame_new (void);

/**
 * ColorKeyFrameCollection
 **/
/* @GeneratePInvoke */
ColorKeyFrameCollection *color_key_frame_collection_new (void);

/**
 * ColumnDefinition
 **/
/* @GeneratePInvoke */
ColumnDefinition *column_definition_new (void);

/* @GeneratePInvoke */
double column_definition_get_actual_width (ColumnDefinition *instance);

/**
 * ColumnDefinitionCollection
 **/
/* @GeneratePInvoke */
ColumnDefinitionCollection *column_definition_collection_new (void);

/**
 * ContentChangedEventArgs
 **/
/* @GeneratePInvoke */
Value *content_changed_event_args_get_new_content (ContentChangedEventArgs *instance);

/* @GeneratePInvoke */
Value *content_changed_event_args_get_old_content (ContentChangedEventArgs *instance);

/**
 * ContentControl
 **/
/* @GeneratePInvoke */
ContentControl *content_control_new (void);

/**
 * Control
 **/
/* @GeneratePInvoke */
bool control_apply_template (Control *instance);

/* @GeneratePInvoke */
Control *control_new (void);

/* @GeneratePInvoke */
DependencyObject *control_get_template_child (Control *instance, const char *name);

/**
 * ControlTemplate
 **/
/* @GeneratePInvoke */
ControlTemplate *control_template_new (void);

/**
 * DataTemplate
 **/
/* @GeneratePInvoke */
DataTemplate *data_template_new (void);

/* @GeneratePInvoke */
DependencyObject *data_template_load_content_with_error (DataTemplate *instance, MoonError *error);

/**
 * DeepZoomImageTileSource
 **/
/* @GeneratePInvoke */
DeepZoomImageTileSource *deep_zoom_image_tile_source_new (void);

/**
 * DependencyObject
 **/
/* @GeneratePInvoke */
void dependency_object_clear_value (DependencyObject *instance, DependencyProperty *property, bool notify_listeners);

/* @GeneratePInvoke */
DependencyObject *dependency_object_new (void);

/* @GeneratePInvoke */
DependencyObject *dependency_object_find_name (DependencyObject *instance, const char *name, Type::Kind *element_kind);

/* @GeneratePInvoke */
Value *dependency_object_get_local_value_with_error (DependencyObject *instance, DependencyProperty *property, MoonError *error);

/* @GeneratePInvoke */
const char *dependency_object_get_name (DependencyObject *instance);

/* @GeneratePInvoke */
Value *dependency_object_get_value_no_default_with_error (DependencyObject *instance, DependencyProperty *property, MoonError *error);

/* @GeneratePInvoke */
Value *dependency_object_get_value_with_error (DependencyObject *instance, Type::Kind whatami, DependencyProperty *property, MoonError *error);

/* @GeneratePInvoke */
bool dependency_object_set_marshalled_value_with_error (DependencyObject *instance, DependencyProperty *property, Value *value, MoonError *error);

/* @GeneratePInvoke */
void dependency_object_set_name (DependencyObject *instance, const char *name);

/**
 * DependencyObjectCollection
 **/
/* @GeneratePInvoke */
DependencyObjectCollection *dependency_object_collection_new (void);

/**
 * DependencyProperty
 **/
/* @GeneratePInvoke */
Value *dependency_property_get_default_value (DependencyProperty *instance);

/* @GeneratePInvoke */
DependencyProperty *dependency_property_get_dependency_property (Type::Kind type, const char *name);

/* @GeneratePInvoke */
DependencyProperty *dependency_property_get_dependency_property_full (Type::Kind type, const char *name, bool inherits);

/* @GeneratePInvoke */
const char *dependency_property_get_name (DependencyProperty *instance);

/* @GeneratePInvoke */
Type::Kind dependency_property_get_property_type (DependencyProperty *instance);

/* @GeneratePInvoke */
bool dependency_property_is_attached (DependencyProperty *instance);

/* @GeneratePInvoke */
bool dependency_property_is_nullable (DependencyProperty *instance);

/* @GeneratePInvoke */
bool dependency_property_is_read_only (DependencyProperty *instance);

DependencyProperty *dependency_property_register (Type::Kind type, const char *name, Value *default_value);

/* @GeneratePInvoke */
DependencyProperty *dependency_property_register_custom (Type::Kind type, const char *name, Value *default_value, Type::Kind vtype, bool attached, bool read_only, bool always_change, NativePropertyChangedHandler *changed_callback);

/* @GeneratePInvoke */
DependencyProperty *dependency_property_register_managed_property (const char *name, Type::Kind property_type, Type::Kind owner_type, Value *defaultValue, bool attached, bool read_only, NativePropertyChangedHandler *callback);

/* @GeneratePInvoke */
void dependency_property_set_is_nullable (DependencyProperty *instance, bool value);

/**
 * Deployment
 **/
/* @GeneratePInvoke */
Deployment *deployment_new (void);

/* @GeneratePInvoke */
Deployment *deployment_get_current (void);

/* @GeneratePInvoke */
Types *deployment_get_types (Deployment *instance);

/* @GeneratePInvoke */
void deployment_set_current (Deployment *value);

/* @GeneratePInvoke */
void deployment_set_current_application (Deployment *instance, Application *value);

/**
 * DiscreteColorKeyFrame
 **/
/* @GeneratePInvoke */
DiscreteColorKeyFrame *discrete_color_key_frame_new (void);

/**
 * DiscreteDoubleKeyFrame
 **/
/* @GeneratePInvoke */
DiscreteDoubleKeyFrame *discrete_double_key_frame_new (void);

/**
 * DiscreteObjectKeyFrame
 **/
/* @GeneratePInvoke */
DiscreteObjectKeyFrame *discrete_object_key_frame_new (void);

/**
 * DiscretePointKeyFrame
 **/
/* @GeneratePInvoke */
DiscretePointKeyFrame *discrete_point_key_frame_new (void);

/**
 * DispatcherTimer
 **/
/* @GeneratePInvoke */
DispatcherTimer *dispatcher_timer_new (void);

/* @GeneratePInvoke */
void dispatcher_timer_start (DispatcherTimer *instance);

/* @GeneratePInvoke */
void dispatcher_timer_stop (DispatcherTimer *instance);

/**
 * DoubleAnimation
 **/
/* @GeneratePInvoke */
DoubleAnimation *double_animation_new (void);

/**
 * DoubleAnimationUsingKeyFrames
 **/
/* @GeneratePInvoke */
DoubleAnimationUsingKeyFrames *double_animation_using_key_frames_new (void);

/**
 * DoubleCollection
 **/
/* @GeneratePInvoke */
DoubleCollection *double_collection_new (void);

/**
 * DoubleKeyFrame
 **/
/* @GeneratePInvoke */
DoubleKeyFrame *double_key_frame_new (void);

/**
 * DoubleKeyFrameCollection
 **/
/* @GeneratePInvoke */
DoubleKeyFrameCollection *double_key_frame_collection_new (void);

/**
 * Downloader
 **/
Downloader *downloader_new (void);

/**
 * DownloaderResponse
 **/
/* @GeneratePInvoke */
int downloader_response_get_response_status (DownloaderResponse *instance);

/* @GeneratePInvoke */
const char *downloader_response_get_response_status_text (DownloaderResponse *instance);

/**
 * DrawingAttributes
 **/
/* @GeneratePInvoke */
DrawingAttributes *drawing_attributes_new (void);

/**
 * Ellipse
 **/
/* @GeneratePInvoke */
Ellipse *ellipse_new (void);

/**
 * EllipseGeometry
 **/
/* @GeneratePInvoke */
EllipseGeometry *ellipse_geometry_new (void);

/**
 * EventObject
 **/
/* @GeneratePInvoke */
int event_object_add_handler (EventObject *instance, const char *event_name, EventHandler handler, gpointer data, GDestroyNotify data_dtor);

/* @GeneratePInvoke */
int event_object_add_xaml_handler (EventObject *instance, const char *event_name, EventHandler handler, gpointer data, GDestroyNotify data_dtor);

void event_object_drain_unrefs (void);

/* @GeneratePInvoke */
Type::Kind event_object_get_object_type (EventObject *instance);

Surface *event_object_get_surface (EventObject *instance);

/* @GeneratePInvoke */
const char *event_object_get_type_name (EventObject *instance);

/* @GeneratePInvoke */
void event_object_ref (EventObject *instance);

/* @GeneratePInvoke */
void event_object_remove_handler (EventObject *instance, const char *event_name, EventHandler handler, gpointer data);

/* @GeneratePInvoke */
void event_object_set_object_type (EventObject *instance, Type::Kind value);

/* @GeneratePInvoke */
void event_object_unref (EventObject *instance);

/**
 * EventTrigger
 **/
/* @GeneratePInvoke */
EventTrigger *event_trigger_new (void);

/**
 * FrameworkElement
 **/
/* @GeneratePInvoke */
Size framework_element_arrange_override (FrameworkElement *instance, Size finalSize);

/* @GeneratePInvoke */
FrameworkElement *framework_element_new (void);

/* @GeneratePInvoke */
Size framework_element_measure_override (FrameworkElement *instance, Size availableSize);

/* @GeneratePInvoke */
void framework_element_register_managed_overrides (FrameworkElement *instance, MeasureOverrideCallback measure_cb, ArrangeOverrideCallback arrange_cb);

/**
 * FrameworkTemplate
 **/
/* @GeneratePInvoke */
FrameworkTemplate *framework_template_new (void);

/**
 * GeneralTransform
 **/
/* @GeneratePInvoke */
GeneralTransform *general_transform_new (void);

/* @GeneratePInvoke */
Matrix *general_transform_get_matrix (GeneralTransform *instance);

/**
 * Geometry
 **/
/* @GeneratePInvoke */
Geometry *geometry_new (void);

/* @GeneratePInvoke */
Rect geometry_get_bounds (Geometry *instance);

/**
 * GeometryCollection
 **/
/* @GeneratePInvoke */
GeometryCollection *geometry_collection_new (void);

/**
 * GeometryGroup
 **/
/* @GeneratePInvoke */
GeometryGroup *geometry_group_new (void);

/**
 * Glyphs
 **/
/* @GeneratePInvoke */
Glyphs *glyphs_new (void);

/**
 * GradientBrush
 **/
/* @GeneratePInvoke */
GradientBrush *gradient_brush_new (void);

/**
 * GradientStop
 **/
/* @GeneratePInvoke */
GradientStop *gradient_stop_new (void);

/**
 * GradientStopCollection
 **/
/* @GeneratePInvoke */
GradientStopCollection *gradient_stop_collection_new (void);

/**
 * Grid
 **/
/* @GeneratePInvoke */
Grid *grid_new (void);

/**
 * Image
 **/
/* @GeneratePInvoke */
Image *image_new (void);

/* @GeneratePInvoke */
void image_set_source (Image *instance, BitmapImage *source);

/**
 * ImageBrush
 **/
/* @GeneratePInvoke */
ImageBrush *image_brush_new (void);

/**
 * InkPresenter
 **/
/* @GeneratePInvoke */
InkPresenter *ink_presenter_new (void);

/**
 * Inline
 **/
/* @GeneratePInvoke */
Inline *inline_new (void);

/**
 * InlineCollection
 **/
/* @GeneratePInvoke */
InlineCollection *inline_collection_new (void);

/**
 * InputMethod
 **/
/* @GeneratePInvoke */
InputMethod *input_method_new (void);

/**
 * ItemCollection
 **/
/* @GeneratePInvoke */
ItemCollection *item_collection_new (void);

/**
 * Keyboard
 **/
/* @GeneratePInvoke */
ModifierKeys keyboard_get_modifiers (void);

/**
 * KeyEventArgs
 **/
/* @GeneratePInvoke */
int key_event_args_get_key (KeyEventArgs *instance);

/* @GeneratePInvoke */
int key_event_args_get_platform_key_code (KeyEventArgs *instance);

/* @GeneratePInvoke */
KeyEventArgs *key_event_args_new (void);

/**
 * KeyFrameCollection
 **/
/* @GeneratePInvoke */
KeyFrameCollection *key_frame_collection_new (void);

/**
 * KeySpline
 **/
/* @GeneratePInvoke */
KeySpline *key_spline_new (void);

/**
 * Line
 **/
/* @GeneratePInvoke */
Line *line_new (void);

/**
 * LinearColorKeyFrame
 **/
/* @GeneratePInvoke */
LinearColorKeyFrame *linear_color_key_frame_new (void);

/**
 * LinearDoubleKeyFrame
 **/
/* @GeneratePInvoke */
LinearDoubleKeyFrame *linear_double_key_frame_new (void);

/**
 * LinearGradientBrush
 **/
/* @GeneratePInvoke */
LinearGradientBrush *linear_gradient_brush_new (void);

/**
 * LinearPointKeyFrame
 **/
/* @GeneratePInvoke */
LinearPointKeyFrame *linear_point_key_frame_new (void);

/**
 * LineBreak
 **/
/* @GeneratePInvoke */
LineBreak *line_break_new (void);

/**
 * LineGeometry
 **/
/* @GeneratePInvoke */
LineGeometry *line_geometry_new (void);

/**
 * LineSegment
 **/
/* @GeneratePInvoke */
LineSegment *line_segment_new (void);

/**
 * Matrix
 **/
/* @GeneratePInvoke */
cairo_matrix_t *matrix_get_matrix_values (Matrix *instance);

/* @GeneratePInvoke */
Matrix *matrix_new (void);

/**
 * MatrixTransform
 **/
/* @GeneratePInvoke */
MatrixTransform *matrix_transform_new (void);

/**
 * MediaAttribute
 **/
/* @GeneratePInvoke */
MediaAttribute *media_attribute_new (void);

/**
 * MediaAttributeCollection
 **/
/* @GeneratePInvoke */
MediaAttribute *media_attribute_collection_get_item_by_name (MediaAttributeCollection *instance, const char *name);

/* @GeneratePInvoke */
MediaAttributeCollection *media_attribute_collection_new (void);

/**
 * MediaBase
 **/
/* @GeneratePInvoke */
MediaBase *media_base_new (void);

/* @GeneratePInvoke */
void media_base_set_source (MediaBase *instance, const char *uri);

/**
 * MediaElement
 **/
/* @GeneratePInvoke */
MediaElement *media_element_new (void);

/* @GeneratePInvoke */
void media_element_pause (MediaElement *instance);

/* @GeneratePInvoke */
void media_element_play (MediaElement *instance);

/* @GeneratePInvoke */
void media_element_set_stream_source (MediaElement *instance, ManagedStreamCallbacks *stream);

/* @GeneratePInvoke */
void media_element_stop (MediaElement *instance);

/**
 * MoonWindow
 **/
/* @GeneratePInvoke */
bool moon_window_get_transparent (MoonWindow *instance);

/* @GeneratePInvoke */
void moon_window_set_transparent (MoonWindow *instance, bool flag);

/**
 * MoonWindowGtk
 **/
/* @GeneratePInvoke */
GtkWidget *moon_window_gtk_get_widget (MoonWindowGtk *instance);

/* @GeneratePInvoke */
MoonWindowGtk *moon_window_gtk_new (bool fullscreen, int w, int h, MoonWindow *parent);

/**
 * MouseEventArgs
 **/
/* @GeneratePInvoke */
void mouse_event_args_get_position (MouseEventArgs *instance, UIElement *relative_to, double *x, double *y);

/* @GeneratePInvoke */
StylusPointCollection *mouse_event_args_get_stylus_points (MouseEventArgs *instance, UIElement *ink_presenter);

/* @GeneratePInvoke */
MouseEventArgs *mouse_event_args_new (void);

/**
 * MultiScaleImage
 **/
/* @GeneratePInvoke */
Point multi_scale_image_element_to_logical_point (MultiScaleImage *instance, Point elementPoint);

/* @GeneratePInvoke */
MultiScaleImage *multi_scale_image_new (void);

/* @GeneratePInvoke */
void multi_scale_image_zoom_about_logical_point (MultiScaleImage *instance, double zoomIncrementFactor, double zoomCenterLogicalX, double zoomCenterLogicalY);

/**
 * MultiScaleSubImage
 **/
/* @GeneratePInvoke */
MultiScaleSubImage *multi_scale_sub_image_new (void);

/**
 * MultiScaleTileSource
 **/
/* @GeneratePInvoke */
long multi_scale_tile_source_get_image_height (MultiScaleTileSource *instance);

/* @GeneratePInvoke */
long multi_scale_tile_source_get_image_width (MultiScaleTileSource *instance);

/* @GeneratePInvoke */
int multi_scale_tile_source_get_tile_height (MultiScaleTileSource *instance);

/* @GeneratePInvoke */
int multi_scale_tile_source_get_tile_overlap (MultiScaleTileSource *instance);

/* @GeneratePInvoke */
int multi_scale_tile_source_get_tile_width (MultiScaleTileSource *instance);

/* @GeneratePInvoke */
MultiScaleTileSource *multi_scale_tile_source_new (void);

void multi_scale_tile_source_set_image_uri_func (MultiScaleTileSource *instance, get_image_uri_func func);

/* @GeneratePInvoke */
void multi_scale_tile_source_set_image_height (MultiScaleTileSource *instance, long height);

/* @GeneratePInvoke */
void multi_scale_tile_source_set_image_width (MultiScaleTileSource *instance, long width);

/* @GeneratePInvoke */
void multi_scale_tile_source_set_tile_height (MultiScaleTileSource *instance, int height);

/* @GeneratePInvoke */
void multi_scale_tile_source_set_tile_overlap (MultiScaleTileSource *instance, int overlap);

/* @GeneratePInvoke */
void multi_scale_tile_source_set_tile_width (MultiScaleTileSource *instance, int width);

/**
 * ObjectAnimationUsingKeyFrames
 **/
/* @GeneratePInvoke */
ObjectAnimationUsingKeyFrames *object_animation_using_key_frames_new (void);

/**
 * ObjectKeyFrame
 **/
/* @GeneratePInvoke */
ObjectKeyFrame *object_key_frame_new (void);

/**
 * ObjectKeyFrameCollection
 **/
/* @GeneratePInvoke */
ObjectKeyFrameCollection *object_key_frame_collection_new (void);

/**
 * Panel
 **/
/* @GeneratePInvoke */
Panel *panel_new (void);

/**
 * ParallelTimeline
 **/
/* @GeneratePInvoke */
ParallelTimeline *parallel_timeline_new (void);

/**
 * PasswordBox
 **/
/* @GeneratePInvoke */
PasswordBox *password_box_new (void);

/**
 * Path
 **/
/* @GeneratePInvoke */
Path *path_new (void);

/**
 * PathFigure
 **/
/* @GeneratePInvoke */
PathFigure *path_figure_new (void);

/**
 * PathFigureCollection
 **/
/* @GeneratePInvoke */
PathFigureCollection *path_figure_collection_new (void);

/**
 * PathGeometry
 **/
/* @GeneratePInvoke */
PathGeometry *path_geometry_new (void);

/**
 * PathSegment
 **/
/* @GeneratePInvoke */
PathSegment *path_segment_new (void);

/**
 * PathSegmentCollection
 **/
/* @GeneratePInvoke */
PathSegmentCollection *path_segment_collection_new (void);

/**
 * PointAnimation
 **/
/* @GeneratePInvoke */
PointAnimation *point_animation_new (void);

/**
 * PointAnimationUsingKeyFrames
 **/
/* @GeneratePInvoke */
PointAnimationUsingKeyFrames *point_animation_using_key_frames_new (void);

/**
 * PointCollection
 **/
/* @GeneratePInvoke */
PointCollection *point_collection_new (void);

/**
 * PointKeyFrame
 **/
/* @GeneratePInvoke */
PointKeyFrame *point_key_frame_new (void);

/**
 * PointKeyFrameCollection
 **/
/* @GeneratePInvoke */
PointKeyFrameCollection *point_key_frame_collection_new (void);

/**
 * PolyBezierSegment
 **/
/* @GeneratePInvoke */
PolyBezierSegment *poly_bezier_segment_new (void);

void poly_bezier_segment_set_points (PolyBezierSegment *instance, PointCollection *points);

/**
 * Polygon
 **/
/* @GeneratePInvoke */
Polygon *polygon_new (void);

/**
 * Polyline
 **/
/* @GeneratePInvoke */
Polyline *polyline_new (void);

/**
 * PolyLineSegment
 **/
/* @GeneratePInvoke */
PolyLineSegment *poly_line_segment_new (void);

/**
 * PolyQuadraticBezierSegment
 **/
/* @GeneratePInvoke */
PolyQuadraticBezierSegment *poly_quadratic_bezier_segment_new (void);

/**
 * Popup
 **/
/* @GeneratePInvoke */
Popup *popup_new (void);

/* @GeneratePInvoke */
void popup_set_active_surface (Popup *instance, Surface *surface);

/**
 * QuadraticBezierSegment
 **/
/* @GeneratePInvoke */
QuadraticBezierSegment *quadratic_bezier_segment_new (void);

/**
 * RadialGradientBrush
 **/
/* @GeneratePInvoke */
RadialGradientBrush *radial_gradient_brush_new (void);

/**
 * Rectangle
 **/
/* @GeneratePInvoke */
Rectangle *rectangle_new (void);

/**
 * RectangleGeometry
 **/
/* @GeneratePInvoke */
RectangleGeometry *rectangle_geometry_new (void);

/**
 * ResourceDictionary
 **/
/* @GeneratePInvoke */
bool resource_dictionary_add_with_error (ResourceDictionary *instance, const char *key, Value *value, MoonError *error);

/* @GeneratePInvoke */
bool resource_dictionary_clear (ResourceDictionary *instance);

/* @GeneratePInvoke */
bool resource_dictionary_contains_key (ResourceDictionary *instance, const char *key);

/* @GeneratePInvoke */
Value *resource_dictionary_get (ResourceDictionary *instance, const char *key, bool *exists);

/* @GeneratePInvoke */
bool resource_dictionary_remove (ResourceDictionary *instance, const char *key);

/* @GeneratePInvoke */
ResourceDictionary *resource_dictionary_new (void);

/* @GeneratePInvoke */
bool resource_dictionary_set (ResourceDictionary *instance, const char *key, Value *value);

/**
 * RotateTransform
 **/
/* @GeneratePInvoke */
RotateTransform *rotate_transform_new (void);

/**
 * RoutedEventArgs
 **/
/* @GeneratePInvoke */
bool routed_event_args_get_handled (RoutedEventArgs *instance);

/* @GeneratePInvoke */
DependencyObject *routed_event_args_get_source (RoutedEventArgs *instance);

/* @GeneratePInvoke */
RoutedEventArgs *routed_event_args_new (void);

/* @GeneratePInvoke */
void routed_event_args_set_handled (RoutedEventArgs *instance, bool handled);

/* @GeneratePInvoke */
void routed_event_args_set_source (RoutedEventArgs *instance, DependencyObject *el);

/**
 * RowDefinition
 **/
/* @GeneratePInvoke */
double row_definition_get_actual_height (RowDefinition *instance);

/* @GeneratePInvoke */
RowDefinition *row_definition_new (void);

/**
 * RowDefinitionCollection
 **/
/* @GeneratePInvoke */
RowDefinitionCollection *row_definition_collection_new (void);

/**
 * Run
 **/
/* @GeneratePInvoke */
Run *run_new (void);

/**
 * ScaleTransform
 **/
/* @GeneratePInvoke */
ScaleTransform *scale_transform_new (void);

/**
 * Setter
 **/
/* @GeneratePInvoke */
Setter *setter_new (void);

/**
 * SetterBase
 **/
/* @GeneratePInvoke */
SetterBase *setter_base_new (void);

/**
 * SetterBaseCollection
 **/
/* @GeneratePInvoke */
SetterBaseCollection *setter_base_collection_new (void);

/**
 * Shape
 **/
/* @GeneratePInvoke */
Shape *shape_new (void);

/**
 * SizeChangedEventArgs
 **/
/* @GeneratePInvoke */
SizeChangedEventArgs *size_changed_event_args_new (void);

/**
 * SkewTransform
 **/
/* @GeneratePInvoke */
SkewTransform *skew_transform_new (void);

/**
 * SolidColorBrush
 **/
/* @GeneratePInvoke */
SolidColorBrush *solid_color_brush_new (void);

/**
 * SplineColorKeyFrame
 **/
/* @GeneratePInvoke */
SplineColorKeyFrame *spline_color_key_frame_new (void);

/**
 * SplineDoubleKeyFrame
 **/
/* @GeneratePInvoke */
SplineDoubleKeyFrame *spline_double_key_frame_new (void);

/**
 * SplinePointKeyFrame
 **/
/* @GeneratePInvoke */
SplinePointKeyFrame *spline_point_key_frame_new (void);

/**
 * Storyboard
 **/
/* @GeneratePInvoke */
bool storyboard_begin (Storyboard *instance);

/* @GeneratePInvoke */
void storyboard_pause (Storyboard *instance);

/* @GeneratePInvoke */
void storyboard_resume (Storyboard *instance);

/* @GeneratePInvoke */
void storyboard_seek (Storyboard *instance, TimeSpan timespan);

/* @GeneratePInvoke */
void storyboard_stop (Storyboard *instance);

/* @GeneratePInvoke */
Storyboard *storyboard_new (void);

/**
 * Stroke
 **/
/* @GeneratePInvoke */
bool stroke_hit_test (Stroke *instance, StylusPointCollection *stylusPoints);

/* @GeneratePInvoke */
Stroke *stroke_new (void);

/**
 * StrokeCollection
 **/
/* @GeneratePInvoke */
StrokeCollection *stroke_collection_hit_test (StrokeCollection *instance, StylusPointCollection *stylusPoints);

/* @GeneratePInvoke */
StrokeCollection *stroke_collection_new (void);

/**
 * Style
 **/
/* @GeneratePInvoke */
void style_seal (Style *instance);

/* @GeneratePInvoke */
Style *style_new (void);

/**
 * StylusInfo
 **/
/* @GeneratePInvoke */
StylusInfo *stylus_info_new (void);

/**
 * StylusPoint
 **/
/* @GeneratePInvoke */
StylusPoint *stylus_point_new (void);

/**
 * StylusPointCollection
 **/
/* @GeneratePInvoke */
StylusPointCollection *stylus_point_collection_new (void);

/**
 * Surface
 **/
/* @GeneratePInvoke */
void surface_attach (Surface *instance, UIElement *toplevel);

/* @GeneratePInvoke */
Downloader *surface_create_downloader (Surface *instance);

/* @GeneratePInvoke */
bool surface_focus_element (Surface *instance, UIElement *element);

/* @GeneratePInvoke */
UIElement *surface_get_focused_element (Surface *instance);

/* @GeneratePInvoke */
TimeManager *surface_get_time_manager (Surface *instance);

MoonWindow *surface_get_window (Surface *instance);

/* @GeneratePInvoke */
bool surface_in_main_thread (void);

/* @GeneratePInvoke */
void surface_paint (Surface *instance, cairo_t *ctx, int x, int y, int width, int height);

/* @GeneratePInvoke */
void surface_resize (Surface *instance, int width, int height);

/* @GeneratePInvoke */
Surface *surface_new (MoonWindow *window, bool silverlight2);

/**
 * TextBlock
 **/
/* @GeneratePInvoke */
TextBlock *text_block_new (void);

/**
 * TextBox
 **/
/* @GeneratePInvoke */
void text_box_select (TextBox *instance, int start, int length);

/* @GeneratePInvoke */
bool text_box_select_all (TextBox *instance);

/* @GeneratePInvoke */
TextBox *text_box_new (void);

/**
 * TextBoxView
 **/
/* @GeneratePInvoke */
TextBoxView *text_box_view_new (void);

/**
 * TextChangedEventArgs
 **/
/* @GeneratePInvoke */
TextChangedEventArgs *text_changed_event_args_new (void);

/**
 * TileBrush
 **/
/* @GeneratePInvoke */
TileBrush *tile_brush_new (void);

/**
 * Timeline
 **/
/* @GeneratePInvoke */
void timeline_set_manual_target (Timeline *instance, DependencyObject *o);

/* @GeneratePInvoke */
Timeline *timeline_new (void);

/**
 * TimelineCollection
 **/
/* @GeneratePInvoke */
TimelineCollection *timeline_collection_new (void);

/**
 * TimelineGroup
 **/
/* @GeneratePInvoke */
TimelineGroup *timeline_group_new (void);

/**
 * TimelineMarker
 **/
/* @GeneratePInvoke */
TimelineMarker *timeline_marker_new (void);

/**
 * TimelineMarkerCollection
 **/
/* @GeneratePInvoke */
TimelineMarkerCollection *timeline_marker_collection_new (void);

/**
 * TimeManager
 **/
/* @GeneratePInvoke */
int time_manager_get_maximum_refresh_rate (TimeManager *instance);

/* @GeneratePInvoke */
void time_manager_set_maximum_refresh_rate (TimeManager *instance, int hz);

/**
 * Transform
 **/
/* @GeneratePInvoke */
Transform *transform_new (void);

/**
 * TransformCollection
 **/
/* @GeneratePInvoke */
TransformCollection *transform_collection_new (void);

/**
 * TransformGroup
 **/
/* @GeneratePInvoke */
TransformGroup *transform_group_new (void);

/**
 * TranslateTransform
 **/
/* @GeneratePInvoke */
TranslateTransform *translate_transform_new (void);

/**
 * TriggerAction
 **/
void trigger_action_fire (TriggerAction *instance);

/* @GeneratePInvoke */
TriggerAction *trigger_action_new (void);

/**
 * TriggerActionCollection
 **/
/* @GeneratePInvoke */
TriggerActionCollection *trigger_action_collection_new (void);

/**
 * TriggerBase
 **/
/* @GeneratePInvoke */
TriggerBase *trigger_base_new (void);

/**
 * TriggerCollection
 **/
/* @GeneratePInvoke */
TriggerCollection *trigger_collection_new (void);

/**
 * Types
 **/
/* @GeneratePInvoke */
void types_free (Types *instance);

/* @GeneratePInvoke */
Type *types_find (Types *instance, Type::Kind type);

/* @GeneratePInvoke */
Type::Kind types_register_type (Types *instance, const char *name, void *gc_handle, Type::Kind parent);

/* @GeneratePInvoke */
Types *types_new (void);

/**
 * UIElement
 **/
/* @GeneratePInvoke */
void uielement_arrange (UIElement *instance, Rect finalRect);

/* @GeneratePInvoke */
bool uielement_capture_mouse (UIElement *instance);

/* @GeneratePInvoke */
void uielement_element_added (UIElement *instance, UIElement *obj);

/* @GeneratePInvoke */
void uielement_element_removed (UIElement *instance, UIElement *obj);

/* @GeneratePInvoke */
Size uielement_get_desired_size (UIElement *instance);

/* @GeneratePInvoke */
Size uielement_get_render_size (UIElement *instance);

/* @GeneratePInvoke */
DependencyObject *uielement_get_subtree_object (UIElement *instance);

/* @GeneratePInvoke */
GeneralTransform *uielement_get_transform_to_uielement (UIElement *instance, UIElement *to_element);

/* @GeneratePInvoke */
UIElement *uielement_get_visual_parent (UIElement *instance);

/* @GeneratePInvoke */
void uielement_invalidate_arrange (UIElement *instance);

/* @GeneratePInvoke */
void uielement_invalidate_measure (UIElement *instance);

/* @GeneratePInvoke */
void uielement_measure (UIElement *instance, Size availableSize);

/* @GeneratePInvoke */
void uielement_release_mouse_capture (UIElement *instance);

/* @GeneratePInvoke */
void uielement_set_subtree_object (UIElement *instance, DependencyObject *value);

/* @GeneratePInvoke */
bool uielement_update_layout (UIElement *instance);

/**
 * UIElementCollection
 **/
/* @GeneratePInvoke */
UIElementCollection *uielement_collection_new (void);

/**
 * UnmanagedMatrix
 **/
/* @GeneratePInvoke */
UnmanagedMatrix *unmanaged_matrix_new (void);

/**
 * UserControl
 **/
/* @GeneratePInvoke */
UserControl *user_control_new (void);

/**
 * VideoBrush
 **/
/* @GeneratePInvoke */
VideoBrush *video_brush_new (void);

/**
 * VisualBrush
 **/
/* @GeneratePInvoke */
VisualBrush *visual_brush_new (void);

/**
 * XamlLoader
 **/
/* @GeneratePInvoke */
DependencyObject *xaml_loader_create_from_file_with_error (XamlLoader *instance, const char *xaml, bool create_namescope, Type::Kind *element_type, MoonError *error);

/* @GeneratePInvoke */
DependencyObject *xaml_loader_create_from_string_with_error (XamlLoader *instance, const char *xaml, bool create_namescope, Type::Kind *element_type, MoonError *error);

/* @GeneratePInvoke */
DependencyObject *xaml_loader_hydrate_from_string_with_error (XamlLoader *instance, const char *xaml, DependencyObject *obj, bool create_namescope, Type::Kind *element_type, MoonError *error);

/**
 * Xap
 **/
/* @GeneratePInvoke */
char *xap_unpack (const char *fname);


G_END_DECLS

#endif
