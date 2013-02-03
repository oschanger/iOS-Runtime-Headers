/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIColor, UIImage;

@interface GKUITheme : NSObject {
    UIColor *_buttonTitleColor;
    UIImage *_cellBackgroundImagesForSection[5];
    UIColor *_headerButtonTitleColor;
    UIColor *_labelColor;
    UIColor *_playerHeaderColor;
    UIColor *_playerHeaderShadowColor;
    UIColor *_secondaryLabelColor;
    UIColor *_welcomeBannerTextColor;
}

@property(retain,readonly) UIImage *achievementsLabelBackgroundImage;
@property(retain,readonly) UIImage *achievementsLabelLargeBackgroundImage;
@property(retain,readonly) UIColor *activeSegmentedControlLabelColor;
@property(retain,readonly) UIImage *aliasAccentImage;
@property(retain,readonly) UIImage *backgroundImage;
@property(retain,readonly) UIFont *boldInfoFont;
@property(retain,readonly) UIFont *boldSmallTitleFont;
@property(retain,readonly) UIFont *boldTitleFont;
@property(retain,readonly) UIColor *buttonTitleColor;
@property(retain,readonly) UIColor *buttonTitleEmbossColor;
@property(retain,readonly) UIColor *embossColor;
@property(retain,readonly) UIColor *focusButtonTextColor;
@property(retain,readonly) UIImage *friendsLabelBackgroundImage;
@property(retain,readonly) UIImage *friendsLabelLargeBackgroundImage;
@property(retain,readonly) UIImage *gamesLabelBackgroundImage;
@property(retain,readonly) UIImage *gamesLabelLargeBackgroundImage;
@property(retain,readonly) UIColor *headerButtonTitleColor;
@property(retain,readonly) UIColor *headerEmbossColor;
@property(retain,readonly) UIColor *headerPlaceholderTextColor;
@property(retain,readonly) UIFont *headlineFont;
@property(retain,readonly) UIColor *highlightedButtonTitleColor;
@property(retain,readonly) UIColor *highlightedEmbossColor;
@property(retain,readonly) UIColor *highlightedInfoTextColor;
@property(retain,readonly) UIColor *inactiveSegmentedControlLabelColor;
@property(retain,readonly) UIFont *infoFont;
@property(retain,readonly) UIColor *infoTextColor;
@property(retain,readonly) UIFont *inviteButtonFont;
@property(retain,readonly) UIImage *inviteButtonImage;
@property(retain,readonly) UIImage *inviteButtonPressedImage;
@property(retain,readonly) UIColor *labelColor;
@property(retain,readonly) UIColor *leaderboardDetailColor;
@property(retain,readonly) UIColor *leaderboardLabelColor;
@property(retain,readonly) UIColor *leaderboardRankColor;
@property(retain,readonly) UIColor *leaderboardScoreColor;
@property(retain,readonly) UIColor *placeholderTextColor;
@property(retain,readonly) UIColor *playerHeaderColor;
@property(retain,readonly) UIColor *playerHeaderEmbossColor;
@property(retain,readonly) UIColor *playerHeaderShadowColor;
@property(retain,readonly) UIImage *ratingStarsBackgroundImage;
@property(retain,readonly) UIImage *ratingStarsForegroundImage;
@property(retain,readonly) UIFont *ribbonSegmentedControlFont;
@property(retain,readonly) UIColor *ribbonSegmentedControlSelectedTextColor;
@property(retain,readonly) UIColor *secondaryButtonTitleColor;
@property(retain,readonly) UIColor *secondaryLabelColor;
@property(retain,readonly) UIColor *shadowColor;
@property(retain,readonly) UIFont *smallTitleFont;
@property(retain,readonly) UIColor *tableCellSeparatorColor;
@property(retain,readonly) UIColor *tableSectionHeaderColor;
@property(retain,readonly) UIFont *titleFont;
@property(retain,readonly) UIColor *typedTextColor;
@property(retain,readonly) UIFont *typedTextFont;
@property(retain,readonly) UIImage *uninviteNowButtonImage;
@property(retain,readonly) UIColor *uninviteNowButtonTitleColor;
@property(retain,readonly) UIColor *uninviteNowButtonTitleHighlightColor;
@property(retain,readonly) UIColor *welcomeBannerTextColor;
@property(readonly) CGSize formSheetSize;
@property(readonly) float modalTableViewMargin;

+ (void)clearCache;
+ (id)sharedTheme;
+ (id)themeForGame:(id)arg1;
+ (id)themeWithIndex:(id)arg1;

- (id)achievementsCompareCellSeparator;
- (id)achievementsCompareCellShortSeparator;
- (id)achievementsCompareCheckMark;
- (id)achievementsDefaultIcon;
- (id)achievementsDefaultIconSmall;
- (id)achievementsDefaultIconiPad;
- (id)achievementsLabelBackgroundImage;
- (id)achievementsLabelLargeBackgroundImage;
- (id)achievementsNotStartedIcon;
- (id)achievementsNotStartedIconSmall;
- (id)achievementsNotStartedIconiPad;
- (id)achievementsProgress;
- (id)achievementsProgressTrack;
- (id)achievementsProgressTrackiPad;
- (id)achievementsProgressiPad;
- (id)achievementsToken;
- (id)achievementsTokenEffects;
- (id)achievementsTokenEffectsiPad;
- (id)achievementsTokenEffectsiPadSmall;
- (id)achievementsTokenFriendPlayer;
- (id)achievementsTokenLocalPlayer;
- (id)achievementsTokenMask;
- (id)achievementsTokenMaskiPad;
- (id)achievementsTokenMaskiPadSmall;
- (id)achievementsTokenOuterRim;
- (id)achievementsTokeniPad;
- (id)achievementsTokeniPadSmall;
- (id)activeSegmentedControlLabelColor;
- (id)addContactImageSelected:(BOOL)arg1;
- (id)aliasAccentImage;
- (id)atomBackgroundImageSelected:(BOOL)arg1;
- (id)backgroundImage;
- (id)backgroundImageForOrientation:(NSInteger)arg1;
- (id)bluePuckForCompareHeader;
- (id)boldHeaderBodyFontOfSize:(float)arg1;
- (id)boldHeaderLabelFontOfSize:(float)arg1;
- (id)boldInfoFont;
- (id)boldSmallTitleFont;
- (id)boldTitleFont;
- (id)buttonImageSelected:(BOOL)arg1;
- (id)buttonTitleColor;
- (id)buttonTitleEmbossColor;
- (id)compareHeaderPiece:(NSInteger)arg1;
- (id)compareSplitterForHeader:(BOOL)arg1;
- (id)darkBackgroundImageTiled;
- (void)dealloc;
- (id)embossColor;
- (id)eventBackgroundImage;
- (id)eventIconImage;
- (id)focusButtonTextColor;
- (id)formSheetFrameBottom;
- (id)formSheetFrameLeft;
- (id)formSheetFrameRight;
- (id)formSheetFrameShadow;
- (id)formSheetNavbarBackground;
- (struct CGSize { float x1; float x2; })formSheetSize;
- (id)friendsLabelBackgroundImage;
- (id)friendsLabelLargeBackgroundImage;
- (id)gameCompareBoldFontOfSize:(float)arg1;
- (id)gameCompareDetailBoldFontOfSize:(float)arg1;
- (id)gameCompareDetailFontOfSize:(float)arg1;
- (id)gameCompareFontOfSize:(float)arg1;
- (id)gameDetailSectionTitleBackgroundImage;
- (id)gameHeaderFontOfSize:(float)arg1;
- (id)gamesLabelBackgroundImage;
- (id)gamesLabelLargeBackgroundImage;
- (id)headerBackground;
- (id)headerBackgroundMask;
- (id)headerBackgroundWithGlow;
- (id)headerBodyFontOfSize:(float)arg1;
- (id)headerButtonTitleColor;
- (id)headerEmbossColor;
- (id)headerLabelFontOfSize:(float)arg1;
- (id)headerOnHeaderStatusFontOfSize:(float)arg1;
- (id)headerPlaceholderTextColor;
- (id)headerStatusFontOfSize:(float)arg1;
- (id)headerTextFieldBackgroundImageWithSectionLocation:(NSInteger)arg1;
- (id)headlineFont;
- (id)highlightedButtonTitleColor;
- (id)highlightedEmbossColor;
- (id)highlightedInfoTextColor;
- (id)horizontalSeparatorImage;
- (id)inactiveSegmentedControlLabelColor;
- (id)infoFont;
- (id)infoTextColor;
- (id)inviteButtonFont;
- (id)inviteButtonImage;
- (id)inviteButtonPressedImage;
- (id)labelColor;
- (id)leaderboardCellBackgroundBlack;
- (id)leaderboardCellBackgroundGreen;
- (id)leaderboardCellBackgroundRed;
- (id)leaderboardDetailColor;
- (id)leaderboardDetailFontOfSize:(float)arg1;
- (id)leaderboardLabelColor;
- (id)leaderboardLabelFontOfSize:(float)arg1;
- (id)leaderboardRankColor;
- (id)leaderboardRankFontOfSize:(float)arg1;
- (id)leaderboardScoreColor;
- (id)leaderboardScoreFontOfSize:(float)arg1;
- (id)matchmakerButtonFontOfSize:(float)arg1;
- (float)modalTableViewMargin;
- (id)navbarBackButtonForControlState:(NSUInteger)arg1 landscape:(BOOL)arg2;
- (id)navbarButtonForControlState:(NSUInteger)arg1 landscape:(BOOL)arg2;
- (id)navbarFocusButtonForControlState:(NSUInteger)arg1 landscape:(BOOL)arg2;
- (id)navbarLandscapeImage;
- (id)navbarPortraitImage;
- (id)navbarShadowImage;
- (id)placeholderTextColor;
- (id)playerHeaderColor;
- (id)playerHeaderEmbossColor;
- (id)playerHeaderFontOfSize:(float)arg1;
- (id)playerHeaderShadowColor;
- (id)playerStatsFontOfSize:(float)arg1;
- (id)ratingStarsBackgroundImage;
- (id)ratingStarsForegroundImage;
- (id)redPuckForCompareHeader;
- (id)ribbonSegmentedControlFont;
- (id)ribbonSegmentedControlSelectedTextColor;
- (id)searchbarBezelImage;
- (id)secondaryButtonTitleColor;
- (id)secondaryLabelColor;
- (id)sectionHeaderDisclosureTriangle;
- (id)sectionHeaderOrnamentLeft;
- (id)sectionHeaderOrnamentRight;
- (id)segmentedControlBackgroundForControlState:(NSUInteger)arg1 landscape:(BOOL)arg2;
- (id)segmentedControlDividerForControlState:(NSUInteger)arg1 landscape:(BOOL)arg2;
- (id)selectedBackgroundImageForOrientation:(NSInteger)arg1;
- (id)selectedDarkBackgroundImageTiled;
- (id)shadowColor;
- (id)showMoreCellBackgroundFill;
- (id)smallButtonImageSelected:(BOOL)arg1;
- (id)smallTitleFont;
- (id)smallTokenBackgroundForType:(NSInteger)arg1;
- (id)tabbarActiveTabImage;
- (id)tabbarIconFriendsActive:(BOOL)arg1;
- (id)tabbarIconGamesActive:(BOOL)arg1;
- (id)tabbarIconMeActive:(BOOL)arg1;
- (id)tabbarIconRequestsActive:(BOOL)arg1;
- (id)tabbarLandscapeImage;
- (id)tabbarPortraitImage;
- (id)tabbarShadowImage;
- (id)tableCellBackgroundImageWithSectionLocation:(NSInteger)arg1 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (id)tableCellBackgroundImageWithSectionLocation:(NSInteger)arg1;
- (id)tableCellBackgroundInnerMask;
- (id)tableCellBackgroundInnerMaskForSize:(struct CGSize { float x1; float x2; })arg1 withSectionLocation:(NSInteger)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })tableCellBackgroundInsetsForSectionLocation:(NSInteger)arg1;
- (id)tableCellDisclosureIndicatorImage;
- (id)tableCellSeparatorColor;
- (id)tableSectionCapCellBackgroundFill;
- (id)tableSectionHeaderColor;
- (id)textFieldBackgroundImageWithHeight:(float)arg1;
- (id)textFieldBackgroundImageWithSectionLocation:(NSInteger)arg1;
- (id)textFieldClearButtonImage;
- (id)titleFont;
- (id)tokenBackgroundForType:(NSInteger)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })tokenInsetsForRow:(NSUInteger)arg1;
- (id)toolbarBackgroundImage;
- (id)typedTextColor;
- (id)typedTextFont;
- (id)uninviteNowButtonImage;
- (id)uninviteNowButtonTitleColor;
- (id)uninviteNowButtonTitleHighlightColor;
- (id)verticalLineImage;
- (id)welcomeBannerFontOfSize:(float)arg1;
- (id)welcomeBannerImageForLocation:(NSInteger)arg1;
- (id)welcomeBannerTextColor;
- (id)welcomeBannerTextImageForLocation:(NSInteger)arg1;
- (id)welcomeSubviewMask;
- (id)welcomeSubviewOutlineImage;

@end
