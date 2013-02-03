/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface CADisplay : NSObject {
     /* Encoded args for previous method: @12@0:4^{Display=^^?@^{__CFString}^{__CFString}I{ModeSet=I[1I]}i{Bounds=iiii}BBBBI}8 */
    void *_impl;
}

@property(readonly) NSArray *availableModes;
@property(retain) CADisplayMode *currentMode;
@property(readonly) NSString *deviceName;
@property(readonly) NSString *name;
@property(readonly) CGRect bounds;
@property(getter=isCloned,readonly) BOOL cloned;
@property(readonly) NSUInteger displayId;
@property(getter=isExternal,readonly) BOOL external;
@property(getter=isOverscanned,readonly) BOOL overscanned;
@property(getter=isSupported,readonly) BOOL supported;
@property(readonly) NSInteger tag;

+ (id)TVOutDisplay;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)displays;
+ (id)mainDisplay;

- (id)_initWithDisplay:(struct Display { int (**x1)(); id x2; struct __CFString {} *x3; struct __CFString {} *x4; NSUInteger x5; struct ModeSet { NSUInteger x_6_1_1; NSUInteger x_6_1_2[1]; } x6; NSInteger x7; struct Bounds { NSInteger x_8_1_1; NSInteger x_8_1_2; NSInteger x_8_1_3; NSInteger x_8_1_4; } x8; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x9; void*x10; void*x11; void*x12; NSUInteger x13; }*)arg1;
- (void)_update;
- (id)availableModes;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)currentMode;
- (id)description;
- (id)deviceName;
- (NSUInteger)displayId;
- (BOOL)isCloned;
- (BOOL)isExternal;
- (BOOL)isOverscanned;
- (BOOL)isSupported;
- (id)name;
- (void)setCurrentMode:(id)arg1;
- (NSInteger)tag;

@end
