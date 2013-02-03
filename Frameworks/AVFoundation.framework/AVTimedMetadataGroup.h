/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVTimedMetadataGroupInternal;

@interface AVTimedMetadataGroup : NSObject <NSCopying> {
    AVTimedMetadataGroupInternal *_priv;
}

@property(copy,readonly) NSArray *items;
@property(readonly) ? timeRange;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (NSUInteger)hash;
- (id)init;
- (id)initWithItems:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (BOOL)isEqual:(id)arg1;
- (id)items;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
