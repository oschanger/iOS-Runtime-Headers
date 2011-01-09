/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILongPressGestureRecognizer, UIWebDocumentView, UIWebSelectionView, UITapAndAHalfRecognizer;



@interface UIWebSelectionAssistant : NSObject <UILongPressGestureRecognizerDelegate>
{
    UIWebDocumentView *_webView;
    UIWebSelectionView *_tintView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapAndAHalfRecognizer *_tapAndAHalfGestureRecognizer;
    BOOL _enabled;
}

@property(readonly) UIWebSelection *selection;
@property(readonly) CGRect selectionFrame;
@property BOOL enabled;


- (void)makeWebSelection:(id)arg1;
- (void)tap:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2 fromView:(id)arg3;
- (BOOL)enabled;
- (BOOL)isSelectionGestureRecognizer:(id)arg1;
- (void)layoutChanged;
- (void)scaleChanged;
- (void)resignedFirstResponder;
- (void)hideCallout;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionFrame;
- (id)initWithWebView:(id)arg1;
- (void)willDrag;
- (void)doneDragging;
- (void)willRotate:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)setGestureRecognizers;
- (void)clearSelection;
- (id)selection;
- (void)selectionChanged;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;

@end