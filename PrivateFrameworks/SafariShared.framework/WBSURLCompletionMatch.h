/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSURLCompletionMatch : NSObject <WBSCompletionListItem> {
    int  _matchLocation;
    SFSearchResult * _sfSearchResultValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int engagementDestination;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (nonatomic, readonly) int matchLocation;
@property (nonatomic, readonly) BOOL matchLocationIsInURL;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic, readonly) SFSearchResult *sfSearchResultValue;
@property (readonly) Class superclass;
@property (getter=isTopHit, nonatomic, readonly) BOOL topHit;

+ (int)matchLocationForString:(id)arg1 inTitle:(id)arg2;
+ (int)matchLocationForString:(id)arg1 inURLString:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (unsigned int)engagementDestination;
- (id)initWithMatchLocation:(int)arg1;
- (BOOL)isTopHit;
- (int)matchLocation;
- (BOOL)matchLocationIsInURL;
- (id)matchingStringWithUserTypedPrefix:(id)arg1;
- (id)originalURLString;
- (id)parsecDomainIdentifier;
- (id)sfSearchResultValue;
- (id)title;
- (id)userVisibleURLString;

@end