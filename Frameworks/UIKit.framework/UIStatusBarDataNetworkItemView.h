/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {
    NSInteger _dataNetworkType;
    BOOL _enableRSSI;
    BOOL _showRSSI;
    NSInteger _wifiStrengthBars;
    NSInteger _wifiStrengthRaw;
}

+ (void)_initializeSafeCategory;

- (id)_dataNetworkImageForStyle:(NSInteger)arg1;
- (id)_stringForRSSI;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)contentsImageForStyle:(NSInteger)arg1;
- (float)extraLeftPadding;
- (BOOL)isAccessibilityElement;
- (float)maximumOverlap;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)updateForNewData:(struct { BOOL x1[22]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; BOOL x15[150]; NSInteger x16; NSInteger x17; unsigned int x18 : 1; BOOL x19[256]; unsigned int x20 : 1; BOOL x21[100]; unsigned int x22 : 1; unsigned int x23 : 1; }*)arg1 actions:(NSInteger)arg2;

@end
