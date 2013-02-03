/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMDeviceMotion : CMLogItem {
    id _internal;
}

@property(readonly) CMAttitude *attitude;
@property(readonly) ? gravity;
@property(readonly) ? rotationRate;
@property(readonly) ? userAcceleration;

- (id)attitude;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct { double x1; double x2; double x3; })gravity;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceMotion:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })arg1 andTimestamp:(double)arg2;
- (struct { double x1; double x2; double x3; })rotationRate;
- (struct { double x1; double x2; double x3; })userAcceleration;

@end
