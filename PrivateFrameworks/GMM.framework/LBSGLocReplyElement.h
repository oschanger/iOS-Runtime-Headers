/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGLocation, NSMutableArray;

@interface LBSGLocReplyElement : PBCodable {
    NSMutableArray *_deviceLocations;
    LBSGLocation *_location;
    NSInteger _status;
}

@property(retain) NSMutableArray *deviceLocations;
@property(retain) LBSGLocation *location;
@property(readonly) NSInteger deviceLocationsCount;
@property(readonly) BOOL hasLocation;
@property NSInteger status;

- (void)addDeviceLocation:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceLocationAtIndex:(NSUInteger)arg1;
- (id)deviceLocations;
- (NSInteger)deviceLocationsCount;
- (id)dictionaryRepresentation;
- (BOOL)hasLocation;
- (id)init;
- (id)location;
- (BOOL)readFrom:(id)arg1;
- (void)setDeviceLocation:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setDeviceLocations:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setStatus:(NSInteger)arg1;
- (NSInteger)status;
- (void)writeTo:(id)arg1;

@end