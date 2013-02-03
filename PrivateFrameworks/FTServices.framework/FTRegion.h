/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class FTRegion, NSArray, NSDictionary;

@interface FTRegion : NSObject {
    NSDictionary *_dictionary;
    FTRegion *_parentRegion;
    NSArray *_subRegions;
}

@property(readonly) NSString *basePhoneNumber;
@property(readonly) NSString *isoCode;
@property(readonly) NSString *label;
@property(readonly) FTRegion *parentRegion;
@property(readonly) NSString *regionID;
@property(readonly) NSArray *subRegions;

- (id)_initWithDictionary:(id)arg1;
- (void)_setParentRegion:(id)arg1;
- (id)basePhoneNumber;
- (void)dealloc;
- (id)description;
- (BOOL)isLeafNode;
- (id)isoCode;
- (id)label;
- (id)parentRegion;
- (id)regionID;
- (id)regionWithID:(id)arg1;
- (BOOL)search:(id)arg1 withResults:(id)arg2;
- (id)subRegions;

@end
