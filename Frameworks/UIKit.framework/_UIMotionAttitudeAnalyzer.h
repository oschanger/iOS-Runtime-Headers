/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIMotionAttitudeAnalyzer : _UIMotionAnalyzer <_UISettingsKeyObserver> {
    union _GLKQuaternion { 
        struct { 
            union _GLKVector3 { 
                struct { 
                    double x; 
                    double y; 
                    double z; 
                } ; 
                struct { 
                    double r; 
                    double g; 
                    double b; 
                } ; 
                struct { 
                    double s; 
                    double t; 
                    double p; 
                } ; 
                double v[3]; 
            } v; 
            double s; 
        } ; 
        struct { 
            double x; 
            double y; 
            double z; 
            double w; 
        } ; 
        double q[4]; 
    }  _absoluteQuaternion;
    UIWindow * _diagnosticsWindow;
    double  _distanceMultiplier;
    BOOL  _hasHistory;
    BOOL  _hasReferenceQuaternion;
    UIView * _horizontalLockIndicator;
    UILabel * _idleIndicator;
    double  _idleLeeway;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _idleStartOffset;
    double  _idleStartTime;
    BOOL  _isApplyingHysteresis;
    double  _jumpThreshold;
    union _GLKQuaternion { 
        struct { 
            union _GLKVector3 { 
                struct { 
                    double x; 
                    double y; 
                    double z; 
                } ; 
                struct { 
                    double r; 
                    double g; 
                    double b; 
                } ; 
                struct { 
                    double s; 
                    double t; 
                    double p; 
                } ; 
                double v[3]; 
            } v; 
            double s; 
        } ; 
        struct { 
            double x; 
            double y; 
            double z; 
            double w; 
        } ; 
        double q[4]; 
    }  _lastAppliedRelativeQuaternion;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _lastAppliedViewerOffset;
    double  _lastUpdate;
    double  _lockStrength;
    double  _lockValue;
    union _GLKQuaternion { 
        struct { 
            union _GLKVector3 { 
                struct { 
                    double x; 
                    double y; 
                    double z; 
                } ; 
                struct { 
                    double r; 
                    double g; 
                    double b; 
                } ; 
                struct { 
                    double s; 
                    double t; 
                    double p; 
                } ; 
                double v[3]; 
            } v; 
            double s; 
        } ; 
        struct { 
            double x; 
            double y; 
            double z; 
            double w; 
        } ; 
        double q[4]; 
    }  _referenceQuaternion;
    double  _referenceShiftSpeed;
    union _GLKQuaternion { 
        struct { 
            union _GLKVector3 { 
                struct { 
                    double x; 
                    double y; 
                    double z; 
                } ; 
                struct { 
                    double r; 
                    double g; 
                    double b; 
                } ; 
                struct { 
                    double s; 
                    double t; 
                    double p; 
                } ; 
                double v[3]; 
            } v; 
            double s; 
        } ; 
        struct { 
            double x; 
            double y; 
            double z; 
            double w; 
        } ; 
        double q[4]; 
    }  _relativeQuaternionOnHysteresisEntry;
    double  _secondsBeforeIdle;
    double  _smoothingDegree;
    UIView * _verticalLockIndicator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createDiagnosticsWindow;
- (void)_createDirectionLockIndicators;
- (void)_createIdleIndicator;
- (struct UIOffset { double x1; double x2; })_currentRawOffset:(union _GLKQuaternion { struct { union _GLKVector3 { struct { double x_1_3_1; double x_1_3_2; double x_1_3_3; } x_1_2_1; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; } x_1_2_2; struct { double x_3_3_1; double x_3_3_2; double x_3_3_3; } x_1_2_3; double x_1_2_4[3]; } x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; double x3[4]; })arg1;
- (int)_directionLockStatus;
- (float)_directionLockStrength;
- (BOOL)_isIdleGivenTimestamp:(double)arg1;
- (float)_referenceShiftRadiansPerSecondForAngle:(float)arg1;
- (union _GLKQuaternion { struct { union _GLKVector3 { struct { double x_1_3_1; double x_1_3_2; double x_1_3_3; } x_1_2_1; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; } x_1_2_2; struct { double x_3_3_1; double x_3_3_2; double x_3_3_3; } x_1_2_3; double x_1_2_4[3]; } x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; double x3[4]; })_relativeQuaternion;
- (void)_resetDirectionalLockWithViewerOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)_shiftReferenceToYieldRelativeQuaternion:(union _GLKQuaternion { struct { union _GLKVector3 { struct { double x_1_3_1; double x_1_3_2; double x_1_3_3; } x_1_2_1; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; } x_1_2_2; struct { double x_3_3_1; double x_3_3_2; double x_3_3_3; } x_1_2_3; double x_1_2_4[3]; } x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; double x3[4]; })arg1;
- (BOOL)_shouldSuspendApplicationForHysteresisGivenNewViewerOffset:(struct UIOffset { double x1; double x2; })arg1 wasSuspendingApplicationForHysteresis:(BOOL)arg2;
- (void)_showIdleUI:(BOOL)arg1;
- (void)_tearDownDiagnosticsWindow;
- (void)_tearDownDirectionLockIndicators;
- (void)_tearDownIdleIndicator;
- (void)_updateAcceleratedOutputRangeFixingOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)_updateDirectionalLockIndicators;
- (void)_updateIdleStateForRawOffset:(struct UIOffset { double x1; double x2; })arg1 timestamp:(double)arg2;
- (void)_updateReferenceAttitude:(union _GLKQuaternion { struct { union _GLKVector3 { struct { double x_1_3_1; double x_1_3_2; double x_1_3_3; } x_1_2_1; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; } x_1_2_2; struct { double x_3_3_1; double x_3_3_2; double x_3_3_3; } x_1_2_3; double x_1_2_4[3]; } x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; double x3[4]; })arg1 timestamp:(double)arg2;
- (void)_updateSettings;
- (void)_updateSmoothedOffsetForRawOffset:(struct UIOffset { double x1; double x2; })arg1;
- (BOOL)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(BOOL)arg3 returningShouldToggleSlowUpdates:(BOOL*)arg4 logger:(id)arg5;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (void)reset;
- (void)resetHysteresis;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)updateHistory;
- (void)updateWithEvent:(id)arg1;

@end