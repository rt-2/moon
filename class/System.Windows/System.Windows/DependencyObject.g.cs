/*
 * Automatically generated, do not edit this file directly
 */

using Mono;
using System;
using System.Collections.Generic;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Documents;
using System.Windows.Ink;
using System.Windows.Input;
using System.Windows.Markup;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Shapes;

namespace System.Windows {
	partial class AssemblyPart {
		publicAssemblyPart () : base (NativeMethods.assembly_part_new ()) {}
		internal AssemblyPart (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.ASSEMBLYPART; }
	}

	partial class AssemblyPartCollection {
		publicAssemblyPartCollection () : base (NativeMethods.assembly_part_collection_new ()) {}
		internal AssemblyPartCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.ASSEMBLYPART_COLLECTION; }
	}

	partial class Deployment {
		publicDeployment () : base (NativeMethods.deployment_new ()) {}
		internal Deployment (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.DEPLOYMENT; }
	}

	partial class EventTrigger {
		publicEventTrigger () : base (NativeMethods.event_trigger_new ()) {}
		internal EventTrigger (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.EVENTTRIGGER; }
	}

	partial class FrameworkElement {
		publicFrameworkElement () : base (NativeMethods.framework_element_new ()) {}
		internal FrameworkElement (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.FRAMEWORKELEMENT; }
	}

	partial class FrameworkTemplate {
		publicFrameworkTemplate () : base (NativeMethods.framework_template_new ()) {}
		internal FrameworkTemplate (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.FRAMEWORKTEMPLATE; }
	}

	partial class ResourceDictionary {
		publicResourceDictionary () : base (NativeMethods.resource_dictionary_new ()) {}
		internal ResourceDictionary (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.RESOURCE_DICTIONARY; }
	}

	partial class Setter {
		publicSetter () : base (NativeMethods.setter_new ()) {}
		internal Setter (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.SETTER; }
	}

	partial class SetterBase {
		publicSetterBase () : base (NativeMethods.setter_base_new ()) {}
		internal SetterBase (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.SETTERBASE; }
	}

	partial class SetterBaseCollection {
		publicSetterBaseCollection () : base (NativeMethods.setter_base_collection_new ()) {}
		internal SetterBaseCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.SETTERBASE_COLLECTION; }
	}

	partial class Style {
		publicStyle () : base (NativeMethods.style_new ()) {}
		internal Style (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.STYLE; }
	}

	partial class TriggerActionCollection {
		publicTriggerActionCollection () : base (NativeMethods.trigger_action_collection_new ()) {}
		internal TriggerActionCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.TRIGGERACTION_COLLECTION; }
	}

	partial class TriggerCollection {
		publicTriggerCollection () : base (NativeMethods.trigger_collection_new ()) {}
		internal TriggerCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.TRIGGER_COLLECTION; }
	}

	partial class UIElement {
		publicUIElement () : base (NativeMethods.uielement_new ()) {}
		internal UIElement (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.UIELEMENT; }
	}
}

namespace System.Windows.Controls {
	partial class Canvas {
		publicCanvas () : base (NativeMethods.canvas_new ()) {}
		internal Canvas (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.CANVAS; }
	}

	partial class ColumnDefinition {
		publicColumnDefinition () : base (NativeMethods.column_definition_new ()) {}
		internal ColumnDefinition (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.COLUMNDEFINITION; }
	}

	partial class ColumnDefinitionCollection {
		publicColumnDefinitionCollection () : base (NativeMethods.column_definition_collection_new ()) {}
		internal ColumnDefinitionCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.COLUMNDEFINITION_COLLECTION; }
	}

	partial class Control {
		publicControl () : base (NativeMethods.control_new ()) {}
		internal Control (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.CONTROL; }
	}

	partial class ControlTemplate {
		publicControlTemplate () : base (NativeMethods.control_template_new ()) {}
		internal ControlTemplate (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.CONTROLTEMPLATE; }
	}

	partial class Grid {
		publicGrid () : base (NativeMethods.grid_new ()) {}
		internal Grid (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.GRID; }
	}

	partial class Image {
		publicImage () : base (NativeMethods.image_new ()) {}
		internal Image (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.IMAGE; }
	}

	partial class InkPresenter {
		publicInkPresenter () : base (NativeMethods.ink_presenter_new ()) {}
		internal InkPresenter (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.INKPRESENTER; }
	}

	partial class MediaElement {
		publicMediaElement () : base (NativeMethods.media_element_new ()) {}
		internal MediaElement (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.MEDIAELEMENT; }
	}

	partial class Panel {
		publicPanel () : base (NativeMethods.panel_new ()) {}
		internal Panel (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.PANEL; }
	}

	partial class RowDefinition {
		publicRowDefinition () : base (NativeMethods.row_definition_new ()) {}
		internal RowDefinition (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.ROWDEFINITION; }
	}

	partial class RowDefinitionCollection {
		publicRowDefinitionCollection () : base (NativeMethods.row_definition_collection_new ()) {}
		internal RowDefinitionCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.ROWDEFINITION_COLLECTION; }
	}

	partial class TextBlock {
		publicTextBlock () : base (NativeMethods.text_block_new ()) {}
		internal TextBlock (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.TEXTBLOCK; }
	}

	partial class UIElementCollection {
		publicUIElementCollection () : base (NativeMethods.uielement_collection_new ()) {}
		internal UIElementCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.UIELEMENT_COLLECTION; }
	}

	partial class UserControl {
		publicUserControl () : base (NativeMethods.user_control_new ()) {}
		internal UserControl (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.USERCONTROL; }
	}
}

namespace System.Windows.Documents {
	partial class Glyphs {
		publicGlyphs () : base (NativeMethods.glyphs_new ()) {}
		internal Glyphs (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.GLYPHS; }
	}

	partial class Inline {
		publicInline () : base (NativeMethods.inline_new ()) {}
		internal Inline (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.INLINE; }
	}

	partial class LineBreak {
		publicLineBreak () : base (NativeMethods.line_break_new ()) {}
		internal LineBreak (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.LINEBREAK; }
	}

	partial class Run {
		publicRun () : base (NativeMethods.run_new ()) {}
		internal Run (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.RUN; }
	}
}

namespace System.Windows.Ink {
	partial class DrawingAttributes {
		publicDrawingAttributes () : base (NativeMethods.drawing_attributes_new ()) {}
		internal DrawingAttributes (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.DRAWINGATTRIBUTES; }
	}

	partial class Stroke {
		publicStroke () : base (NativeMethods.stroke_new ()) {}
		internal Stroke (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.STROKE; }
	}

	partial class StrokeCollection {
		publicStrokeCollection () : base (NativeMethods.stroke_collection_new ()) {}
		internal StrokeCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.STROKE_COLLECTION; }
	}
}

namespace System.Windows.Input {
	partial class StylusInfo {
		publicStylusInfo () : base (NativeMethods.stylus_info_new ()) {}
		internal StylusInfo (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.STYLUSINFO; }
	}

	partial class StylusPointCollection {
		publicStylusPointCollection () : base (NativeMethods.stylus_point_collection_new ()) {}
		internal StylusPointCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.STYLUSPOINT_COLLECTION; }
	}
}

namespace System.Windows.Media {
	partial class ArcSegment {
		publicArcSegment () : base (NativeMethods.arc_segment_new ()) {}
		internal ArcSegment (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.ARCSEGMENT; }
	}

	partial class BezierSegment {
		publicBezierSegment () : base (NativeMethods.bezier_segment_new ()) {}
		internal BezierSegment (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.BEZIERSEGMENT; }
	}

	partial class Brush {
		publicBrush () : base (NativeMethods.brush_new ()) {}
		internal Brush (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.BRUSH; }
	}

	partial class DoubleCollection {
		publicDoubleCollection () : base (NativeMethods.double_collection_new ()) {}
		internal DoubleCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.DOUBLE_COLLECTION; }
	}

	partial class EllipseGeometry {
		publicEllipseGeometry () : base (NativeMethods.ellipse_geometry_new ()) {}
		internal EllipseGeometry (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.ELLIPSEGEOMETRY; }
	}

	partial class GeneralTransform {
		publicGeneralTransform () : base (NativeMethods.general_transform_new ()) {}
		internal GeneralTransform (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.GENERALTRANSFORM; }
	}

	partial class Geometry {
		publicGeometry () : base (NativeMethods.geometry_new ()) {}
		internal Geometry (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.GEOMETRY; }
	}

	partial class GeometryCollection {
		publicGeometryCollection () : base (NativeMethods.geometry_collection_new ()) {}
		internal GeometryCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.GEOMETRY_COLLECTION; }
	}

	partial class GeometryGroup {
		publicGeometryGroup () : base (NativeMethods.geometry_group_new ()) {}
		internal GeometryGroup (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.GEOMETRYGROUP; }
	}

	partial class GradientBrush {
		publicGradientBrush () : base (NativeMethods.gradient_brush_new ()) {}
		internal GradientBrush (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.GRADIENTBRUSH; }
	}

	partial class GradientStop {
		publicGradientStop () : base (NativeMethods.gradient_stop_new ()) {}
		internal GradientStop (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.GRADIENTSTOP; }
	}

	partial class GradientStopCollection {
		publicGradientStopCollection () : base (NativeMethods.gradient_stop_collection_new ()) {}
		internal GradientStopCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.GRADIENTSTOP_COLLECTION; }
	}

	partial class ImageBrush {
		publicImageBrush () : base (NativeMethods.image_brush_new ()) {}
		internal ImageBrush (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.IMAGEBRUSH; }
	}

	partial class LinearGradientBrush {
		publicLinearGradientBrush () : base (NativeMethods.linear_gradient_brush_new ()) {}
		internal LinearGradientBrush (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.LINEARGRADIENTBRUSH; }
	}

	partial class LineGeometry {
		publicLineGeometry () : base (NativeMethods.line_geometry_new ()) {}
		internal LineGeometry (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.LINEGEOMETRY; }
	}

	partial class LineSegment {
		publicLineSegment () : base (NativeMethods.line_segment_new ()) {}
		internal LineSegment (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.LINESEGMENT; }
	}

	partial class MatrixTransform {
		publicMatrixTransform () : base (NativeMethods.matrix_transform_new ()) {}
		internal MatrixTransform (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.MATRIXTRANSFORM; }
	}

	partial class PathFigure {
		publicPathFigure () : base (NativeMethods.path_figure_new ()) {}
		internal PathFigure (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.PATHFIGURE; }
	}

	partial class PathFigureCollection {
		publicPathFigureCollection () : base (NativeMethods.path_figure_collection_new ()) {}
		internal PathFigureCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.PATHFIGURE_COLLECTION; }
	}

	partial class PathGeometry {
		publicPathGeometry () : base (NativeMethods.path_geometry_new ()) {}
		internal PathGeometry (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.PATHGEOMETRY; }
	}

	partial class PathSegment {
		publicPathSegment () : base (NativeMethods.path_segment_new ()) {}
		internal PathSegment (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.PATHSEGMENT; }
	}

	partial class PathSegmentCollection {
		publicPathSegmentCollection () : base (NativeMethods.path_segment_collection_new ()) {}
		internal PathSegmentCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.PATHSEGMENT_COLLECTION; }
	}

	partial class PointCollection {
		publicPointCollection () : base (NativeMethods.point_collection_new ()) {}
		internal PointCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.POINT_COLLECTION; }
	}

	partial class PolyBezierSegment {
		publicPolyBezierSegment () : base (NativeMethods.poly_bezier_segment_new ()) {}
		internal PolyBezierSegment (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.POLYBEZIERSEGMENT; }
	}

	partial class PolyLineSegment {
		publicPolyLineSegment () : base (NativeMethods.poly_line_segment_new ()) {}
		internal PolyLineSegment (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.POLYLINESEGMENT; }
	}

	partial class PolyQuadraticBezierSegment {
		publicPolyQuadraticBezierSegment () : base (NativeMethods.poly_quadratic_bezier_segment_new ()) {}
		internal PolyQuadraticBezierSegment (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.POLYQUADRATICBEZIERSEGMENT; }
	}

	partial class QuadraticBezierSegment {
		publicQuadraticBezierSegment () : base (NativeMethods.quadratic_bezier_segment_new ()) {}
		internal QuadraticBezierSegment (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.QUADRATICBEZIERSEGMENT; }
	}

	partial class RadialGradientBrush {
		publicRadialGradientBrush () : base (NativeMethods.radial_gradient_brush_new ()) {}
		internal RadialGradientBrush (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.RADIALGRADIENTBRUSH; }
	}

	partial class RectangleGeometry {
		publicRectangleGeometry () : base (NativeMethods.rectangle_geometry_new ()) {}
		internal RectangleGeometry (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.RECTANGLEGEOMETRY; }
	}

	partial class RotateTransform {
		publicRotateTransform () : base (NativeMethods.rotate_transform_new ()) {}
		internal RotateTransform (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.ROTATETRANSFORM; }
	}

	partial class ScaleTransform {
		publicScaleTransform () : base (NativeMethods.scale_transform_new ()) {}
		internal ScaleTransform (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.SCALETRANSFORM; }
	}

	partial class SkewTransform {
		publicSkewTransform () : base (NativeMethods.skew_transform_new ()) {}
		internal SkewTransform (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.SKEWTRANSFORM; }
	}

	partial class SolidColorBrush {
		publicSolidColorBrush () : base (NativeMethods.solid_color_brush_new ()) {}
		internal SolidColorBrush (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.SOLIDCOLORBRUSH; }
	}

	partial class TileBrush {
		publicTileBrush () : base (NativeMethods.tile_brush_new ()) {}
		internal TileBrush (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.TILEBRUSH; }
	}

	partial class TimelineMarker {
		publicTimelineMarker () : base (NativeMethods.timeline_marker_new ()) {}
		internal TimelineMarker (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.TIMELINEMARKER; }
	}

	partial class TimelineMarkerCollection {
		publicTimelineMarkerCollection () : base (NativeMethods.timeline_marker_collection_new ()) {}
		internal TimelineMarkerCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.TIMELINEMARKER_COLLECTION; }
	}

	partial class Transform {
		publicTransform () : base (NativeMethods.transform_new ()) {}
		internal Transform (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.TRANSFORM; }
	}

	partial class TransformCollection {
		publicTransformCollection () : base (NativeMethods.transform_collection_new ()) {}
		internal TransformCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.TRANSFORM_COLLECTION; }
	}

	partial class TransformGroup {
		publicTransformGroup () : base (NativeMethods.transform_group_new ()) {}
		internal TransformGroup (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.TRANSFORMGROUP; }
	}

	partial class TranslateTransform {
		publicTranslateTransform () : base (NativeMethods.translate_transform_new ()) {}
		internal TranslateTransform (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.TRANSLATETRANSFORM; }
	}

	partial class VideoBrush {
		publicVideoBrush () : base (NativeMethods.video_brush_new ()) {}
		internal VideoBrush (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.VIDEOBRUSH; }
	}
}

namespace System.Windows.Media.Animation {
	partial class Animation {
		publicAnimation () : base (NativeMethods.animation_new ()) {}
		internal Animation (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.ANIMATION; }
	}

	partial class BeginStoryboard {
		publicBeginStoryboard () : base (NativeMethods.begin_storyboard_new ()) {}
		internal BeginStoryboard (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.BEGINSTORYBOARD; }
	}

	partial class ColorAnimation {
		publicColorAnimation () : base (NativeMethods.color_animation_new ()) {}
		internal ColorAnimation (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.COLORANIMATION; }
	}

	partial class ColorAnimationUsingKeyFrames {
		publicColorAnimationUsingKeyFrames () : base (NativeMethods.color_animation_using_key_frames_new ()) {}
		internal ColorAnimationUsingKeyFrames (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.COLORANIMATIONUSINGKEYFRAMES; }
	}

	partial class ColorKeyFrame {
		publicColorKeyFrame () : base (NativeMethods.color_key_frame_new ()) {}
		internal ColorKeyFrame (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.COLORKEYFRAME; }
	}

	partial class ColorKeyFrameCollection {
		publicColorKeyFrameCollection () : base (NativeMethods.color_key_frame_collection_new ()) {}
		internal ColorKeyFrameCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.COLORKEYFRAME_COLLECTION; }
	}

	partial class DiscreteColorKeyFrame {
		publicDiscreteColorKeyFrame () : base (NativeMethods.discrete_color_key_frame_new ()) {}
		internal DiscreteColorKeyFrame (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.DISCRETECOLORKEYFRAME; }
	}

	partial class DiscreteDoubleKeyFrame {
		publicDiscreteDoubleKeyFrame () : base (NativeMethods.discrete_double_key_frame_new ()) {}
		internal DiscreteDoubleKeyFrame (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.DISCRETEDOUBLEKEYFRAME; }
	}

	partial class DiscretePointKeyFrame {
		publicDiscretePointKeyFrame () : base (NativeMethods.discrete_point_key_frame_new ()) {}
		internal DiscretePointKeyFrame (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.DISCRETEPOINTKEYFRAME; }
	}

	partial class DoubleAnimation {
		publicDoubleAnimation () : base (NativeMethods.double_animation_new ()) {}
		internal DoubleAnimation (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.DOUBLEANIMATION; }
	}

	partial class DoubleAnimationUsingKeyFrames {
		publicDoubleAnimationUsingKeyFrames () : base (NativeMethods.double_animation_using_key_frames_new ()) {}
		internal DoubleAnimationUsingKeyFrames (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.DOUBLEANIMATIONUSINGKEYFRAMES; }
	}

	partial class DoubleKeyFrame {
		publicDoubleKeyFrame () : base (NativeMethods.double_key_frame_new ()) {}
		internal DoubleKeyFrame (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.DOUBLEKEYFRAME; }
	}

	partial class DoubleKeyFrameCollection {
		publicDoubleKeyFrameCollection () : base (NativeMethods.double_key_frame_collection_new ()) {}
		internal DoubleKeyFrameCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.DOUBLEKEYFRAME_COLLECTION; }
	}

	partial class KeyFrame {
		publicKeyFrame () : base (NativeMethods.key_frame_new ()) {}
		internal KeyFrame (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.KEYFRAME; }
	}

	partial class KeySpline {
		publicKeySpline () : base (NativeMethods.key_spline_new ()) {}
		internal KeySpline (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.KEYSPLINE; }
	}

	partial class LinearColorKeyFrame {
		publicLinearColorKeyFrame () : base (NativeMethods.linear_color_key_frame_new ()) {}
		internal LinearColorKeyFrame (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.LINEARCOLORKEYFRAME; }
	}

	partial class LinearDoubleKeyFrame {
		publicLinearDoubleKeyFrame () : base (NativeMethods.linear_double_key_frame_new ()) {}
		internal LinearDoubleKeyFrame (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.LINEARDOUBLEKEYFRAME; }
	}

	partial class LinearPointKeyFrame {
		publicLinearPointKeyFrame () : base (NativeMethods.linear_point_key_frame_new ()) {}
		internal LinearPointKeyFrame (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.LINEARPOINTKEYFRAME; }
	}

	partial class ParallelTimeline {
		publicParallelTimeline () : base (NativeMethods.parallel_timeline_new ()) {}
		internal ParallelTimeline (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.PARALLELTIMELINE; }
	}

	partial class PointAnimation {
		publicPointAnimation () : base (NativeMethods.point_animation_new ()) {}
		internal PointAnimation (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.POINTANIMATION; }
	}

	partial class PointAnimationUsingKeyFrames {
		publicPointAnimationUsingKeyFrames () : base (NativeMethods.point_animation_using_key_frames_new ()) {}
		internal PointAnimationUsingKeyFrames (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.POINTANIMATIONUSINGKEYFRAMES; }
	}

	partial class PointKeyFrame {
		publicPointKeyFrame () : base (NativeMethods.point_key_frame_new ()) {}
		internal PointKeyFrame (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.POINTKEYFRAME; }
	}

	partial class PointKeyFrameCollection {
		publicPointKeyFrameCollection () : base (NativeMethods.point_key_frame_collection_new ()) {}
		internal PointKeyFrameCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.POINTKEYFRAME_COLLECTION; }
	}

	partial class SplineColorKeyFrame {
		publicSplineColorKeyFrame () : base (NativeMethods.spline_color_key_frame_new ()) {}
		internal SplineColorKeyFrame (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.SPLINECOLORKEYFRAME; }
	}

	partial class SplineDoubleKeyFrame {
		publicSplineDoubleKeyFrame () : base (NativeMethods.spline_double_key_frame_new ()) {}
		internal SplineDoubleKeyFrame (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.SPLINEDOUBLEKEYFRAME; }
	}

	partial class SplinePointKeyFrame {
		publicSplinePointKeyFrame () : base (NativeMethods.spline_point_key_frame_new ()) {}
		internal SplinePointKeyFrame (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.SPLINEPOINTKEYFRAME; }
	}

	partial class Storyboard {
		publicStoryboard () : base (NativeMethods.storyboard_new ()) {}
		internal Storyboard (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.STORYBOARD; }
	}

	partial class Timeline {
		publicTimeline () : base (NativeMethods.timeline_new ()) {}
		internal Timeline (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.TIMELINE; }
	}

	partial class TimelineCollection {
		publicTimelineCollection () : base (NativeMethods.timeline_collection_new ()) {}
		internal TimelineCollection (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.TIMELINE_COLLECTION; }
	}

	partial class TimelineGroup {
		publicTimelineGroup () : base (NativeMethods.timeline_group_new ()) {}
		internal TimelineGroup (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.TIMELINEGROUP; }
	}
}

namespace System.Windows.Shapes {
	partial class Ellipse {
		publicEllipse () : base (NativeMethods.ellipse_new ()) {}
		internal Ellipse (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.ELLIPSE; }
	}

	partial class Line {
		publicLine () : base (NativeMethods.line_new ()) {}
		internal Line (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.LINE; }
	}

	partial class Path {
		publicPath () : base (NativeMethods.path_new ()) {}
		internal Path (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.PATH; }
	}

	partial class Polygon {
		publicPolygon () : base (NativeMethods.polygon_new ()) {}
		internal Polygon (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.POLYGON; }
	}

	partial class Polyline {
		publicPolyline () : base (NativeMethods.polyline_new ()) {}
		internal Polyline (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.POLYLINE; }
	}

	partial class Rectangle {
		publicRectangle () : base (NativeMethods.rectangle_new ()) {}
		internal Rectangle (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.RECTANGLE; }
	}

	partial class Shape {
		publicShape () : base (NativeMethods.shape_new ()) {}
		internal Shape (IntPtr raw) : base (raw) {}
		internal override Kind GetKind () { return Kind.SHAPE; }
	}
}
