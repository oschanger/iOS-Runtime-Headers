/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;

@interface UIPanGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    unsigned int _failsPastMaxTouches : 1;
    } _firstScreenLocation;
    float _hysteresis;
    } _lastScreenLocation;
    NSUInteger _lastTouchCount;
    double _lastTouchTime;
    NSUInteger _maxTouchCount;
    NSUInteger _minTouchCount;
    id _previousVelocitySample;
    NSMutableArray *_touches;
    id _velocitySample;
}

@property(getter=_previousVelocitySample,readonly) UIPanGestureVelocitySample *_previousVelocitySample;
@property(getter=_velocitySample,readonly) UIPanGestureVelocitySample *_velocitySample;
@property NSUInteger maximumNumberOfTouches;
@property NSUInteger minimumNumberOfTouches;

- (void)_centroidMovedTo:(struct CGPoint { float x1; float x2; })arg1 atTime:(double)arg2;
- (struct CADoublePoint { double x1; double x2; })_convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromScreenCoordinatesToView:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })_convertPoint:(struct CGPoint { float x1; float x2; })arg1 toScreenCoordinatesFromView:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2;
- (float)_hysteresis;
- (NSInteger)_lastTouchCount;
- (id)_previousVelocitySample;
- (void)_resetGestureRecognizer;
- (void)_resetVelocitySamples;
- (void)_setHysteresis:(float)arg1;
- (BOOL)_shouldTryToBeginWithEvent:(id)arg1;
- (void)_touchesListChangedFrom:(id)arg1 to:(id)arg2;
- (id)_velocitySample;
- (BOOL)_willScrollX;
- (BOOL)_willScrollY;
- (void)dealloc;
- (BOOL)failsPastMaxTouches;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })locationOfTouch:(NSUInteger)arg1 inView:(id)arg2;
- (NSUInteger)maximumNumberOfTouches;
- (NSUInteger)minimumNumberOfTouches;
- (NSUInteger)numberOfTouches;
- (void)setFailsPastMaxTouches:(BOOL)arg1;
- (void)setMaximumNumberOfTouches:(NSUInteger)arg1;
- (void)setMinimumNumberOfTouches:(NSUInteger)arg1;
- (void)setTranslation:(struct CGPoint { float x1; float x2; })arg1 inView:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })translationInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })velocityInView:(id)arg1;

@end
