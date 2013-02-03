/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMutableArray, NSArray;

@interface GKLeaderboardCell : GKMultiColumnTableViewCell {
    NSInteger _bottomEdgeStyle;
    NSMutableArray *_dividerArray;
    NSArray *_leaderboardCellStyles;
    NSArray *_leaderboardSectionLocations;
    NSInteger _topEdgeStyle;
}

@property(retain) NSMutableArray *dividerArray;
@property(readonly) GKLeaderboardCellBackgroundView *leaderboardBackgroundView;
@property(retain) NSArray *leaderboardCellStyles;
@property(retain) NSArray *leaderboardSectionLocations;
@property(readonly) GKLeaderboardCellBackgroundView *selectedLeaderboardBackgroundView;
@property NSInteger bottomEdgeStyle;
@property NSInteger topEdgeStyle;

- (NSInteger)bottomEdgeStyle;
- (void)configureBackgroundView;
- (float)contentsMargin;
- (id)createDividerView;
- (void)dealloc;
- (id)description;
- (id)dividerArray;
- (id)initWithStyle:(NSInteger)arg1 reuseIdentifier:(id)arg2 tableViewStyle:(NSInteger)arg3 backgroundStyle:(NSInteger)arg4;
- (void)layoutSubviews;
- (id)leaderboardBackgroundView;
- (id)leaderboardCellStyles;
- (id)leaderboardSectionLocations;
- (id)selectedLeaderboardBackgroundView;
- (void)setBottomEdgeStyle:(NSInteger)arg1;
- (void)setContentsArray:(id)arg1;
- (void)setDividerArray:(id)arg1;
- (void)setLeaderboardCellStyles:(id)arg1;
- (void)setLeaderboardSectionLocations:(id)arg1;
- (void)setSectionLocation:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)setTopEdgeStyle:(NSInteger)arg1;
- (NSInteger)topEdgeStyle;
- (void)updateBackgroundViews;

@end
