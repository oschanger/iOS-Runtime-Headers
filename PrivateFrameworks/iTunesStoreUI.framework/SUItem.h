/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUItemContentRating, NSArray, NSDate, SUItemReviewStatistics, NSDictionary, SSItemImageCollection, SUItem, NSString, SSItemOffer;

@interface SUItem : NSObject <NSCopying> {
    NSString *_artistName;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_collectionName;
    SUItem *_containerItem;
    NSString *_containerName;
    SUItemContentRating *_contentRating;
    NSString *_copyrightString;
    SSItemOffer *_defaultStoreOffer;
    NSDictionary *_dictionary;
    NSString *_disclaimerString;
    BOOL _gameCenterEnabled;
    NSString *_genreName;
    NSString *_humanReadableDescription;
    NSInteger _itemDisplayType;
    unsigned long long _itemIdentifier;
    SSItemImageCollection *_itemImageCollection;
    NSArray *_itemLinks;
    NSString *_itemMediaKind;
    NSInteger _itemType;
    NSDate *_releaseDate;
    NSString *_releaseDateString;
    NSInteger _representedItemCount;
    SUItemReviewStatistics *_reviewStatistics;
    NSString *_secondaryTitle;
    NSArray *_storeOffers;
    NSString *_title;
    NSString *_unmodifiedTitle;
}

@property(copy) NSString *artistName;
@property(copy) NSString *bundleIdentifier;
@property(copy) NSString *bundleVersion;
@property(copy) NSString *collectionName;
@property(retain) SUItem *containerItem;
@property(copy) NSString *containerName;
@property(copy) SUItemContentRating *contentRating;
@property(copy) NSString *copyrightString;
@property(readonly) SSItemOffer *defaultStoreOffer;
@property(copy) NSString *disclaimerString;
@property(readonly) SUItemLink *externalArtistPageLink;
@property(copy) NSString *genreName;
@property(copy) NSString *humanReadableDescription;
@property(readonly) NSDictionary *itemDictionary;
@property(copy) SSItemImageCollection *itemImageCollection;
@property(copy) NSArray *itemLinks;
@property(copy) NSString *itemMediaKind;
@property(readonly) NSString *itemTypeString;
@property(retain) NSDate *releaseDate;
@property(copy) SUItemReviewStatistics *reviewStatistics;
@property(copy) NSString *secondaryTitle;
@property(copy) NSArray *storeOffers;
@property(copy) NSString *title;
@property(copy) NSString *unmodifiedTitle;
@property(getter=isDownloadable,readonly) BOOL downloadable;
@property(getter=isGameCenterEnabled) BOOL gameCenterEnabled;
@property NSInteger itemDisplayType;
@property unsigned long long itemIdentifier;
@property NSInteger itemType;
@property NSInteger representedItemCount;

- (NSInteger)_linkTargetForTargetString:(id)arg1 typeString:(id)arg2;
- (NSInteger)_linkTypeForString:(id)arg1;
- (id)_newItemLinkWithType:(NSInteger)arg1 URLKey:(id)arg2 titleKey:(id)arg3;
- (id)_newItemLinkWithType:(NSInteger)arg1 dictionary:(id)arg2;
- (id)_newPrimaryItemLink;
- (void)_reloadDefaultStoreOffer;
- (void)_reloadImagesAndLinksFromSquishes:(id)arg1;
- (void)_reloadItemImages;
- (void)_reloadItemLinks;
- (void)_reloadProperties;
- (void)_reloadStoreOffers;
- (id)_squishImageForSquishDictionary:(id)arg1;
- (id)_valueForFirstAvailableKey:(id)arg1;
- (id)artistName;
- (BOOL)boolValueForProperty:(id)arg1;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)collectionName;
- (id)containerItem;
- (id)containerName;
- (id)contentRating;
- (id)copyReleaseDateStringWithStyle:(long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyrightString;
- (id)dateValueForProperty:(id)arg1;
- (void)dealloc;
- (id)defaultStoreOffer;
- (id)disclaimerString;
- (id)externalArtistPageLink;
- (id)firstItemLinkForType:(NSInteger)arg1;
- (id)genreName;
- (id)humanReadableDescription;
- (id)initWithDictionary:(id)arg1;
- (NSInteger)integerValueForProperty:(id)arg1;
- (BOOL)isDisplayable:(id*)arg1;
- (BOOL)isDownloadable;
- (BOOL)isGameCenterEnabled;
- (id)itemDictionary;
- (NSInteger)itemDisplayType;
- (unsigned long long)itemIdentifier;
- (id)itemImageCollection;
- (id)itemLinks;
- (id)itemLinksForType:(NSInteger)arg1;
- (id)itemMediaKind;
- (NSInteger)itemType;
- (id)itemTypeString;
- (id)releaseDate;
- (NSInteger)representedItemCount;
- (id)reviewStatistics;
- (id)secondaryTitle;
- (void)setArtistName:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setCollectionName:(id)arg1;
- (void)setContainerItem:(id)arg1;
- (void)setContainerName:(id)arg1;
- (void)setContentRating:(id)arg1;
- (void)setCopyrightString:(id)arg1;
- (void)setDisclaimerString:(id)arg1;
- (void)setGameCenterEnabled:(BOOL)arg1;
- (void)setGenreName:(id)arg1;
- (void)setHumanReadableDescription:(id)arg1;
- (void)setItemDisplayType:(NSInteger)arg1;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (void)setItemImageCollection:(id)arg1;
- (void)setItemLinks:(id)arg1;
- (void)setItemMediaKind:(id)arg1;
- (void)setItemType:(NSInteger)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setRepresentedItemCount:(NSInteger)arg1;
- (void)setReviewStatistics:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setStoreOffers:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnmodifiedTitle:(id)arg1;
- (id)storeOfferForIdentifier:(id)arg1;
- (id)storeOffers;
- (id)stringValueForProperty:(id)arg1;
- (id)title;
- (id)unmodifiedTitle;
- (id)valueForProperty:(id)arg1;

@end
