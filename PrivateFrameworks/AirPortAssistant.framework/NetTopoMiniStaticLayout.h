/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class CALayer, NSArray, NSMutableArray;

@interface NetTopoMiniStaticLayout : NSObject {
    NSMutableArray *_connectionLayers;
    CALayer *_containerLayer;
    int _layoutOptions;
    NSMutableArray *_topoDeviceLayers;
    NSArray *_topoDevicesDescriptor;
}

@property(retain) CALayer * containerLayer;
@property int layoutOptions;
@property(readonly) NSArray * topoDeviceLayers;
@property(retain) NSArray * topoDevicesDescriptor;

- (id)containerLayer;
- (void)createLayoutForDevices:(id)arg1;
- (void)dealloc;
- (void)destroyDeviceLayers;
- (id)initWithContainerLayer:(id)arg1 andOptions:(int)arg2;
- (int)layoutOptions;
- (struct CGImage { }*)newImageForDeviceSpec:(id)arg1 wantSmall:(BOOL)arg2;
- (void)performLayout;
- (void)setContainerLayer:(id)arg1;
- (void)setLayoutOptions:(int)arg1;
- (void)setTopoDevicesDescriptor:(id)arg1;
- (id)topoDeviceLayers;
- (id)topoDevicesDescriptor;

@end