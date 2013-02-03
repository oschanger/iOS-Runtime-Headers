/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, GKPlayer, GKScore, GKGame, NSError;

@interface GKSparseLeaderboard : GKLeaderboard {
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _availableRange;
    NSArray *_availableScores;
    GKScore *_comparePlayerScore;
    } _currentRange;
    } _displayedRange;
    NSError *_error;
    GKGame *_game;
    NSUInteger _maxLoaded;
    GKPlayer *_player;
    NSArray *_showcasedScores;
    } _totalRange;
}

@property(retain) NSArray *availableScores;
@property(retain) GKScore *comparePlayerScore;
@property(retain) NSError *error;
@property(retain) GKGame *game;
@property(retain) GKPlayer *player;
@property(readonly) _NSRange availableRange;
@property(readonly) BOOL displayComparePlayer;
@property(readonly) BOOL displayLocalPlayer;
@property _NSRange displayedRange;
@property(readonly) _NSRange loadedRange;
@property(readonly) BOOL moreScoresAvailable;
@property(readonly) BOOL showcasedScoresAdjacent;
@property(readonly) _NSRange totalRange;

- (struct _NSRange { NSUInteger x1; NSUInteger x2; })availableRange;
- (id)availableScores;
- (id)comparePlayerScore;
- (void)dealloc;
- (id)description;
- (BOOL)displayComparePlayer;
- (BOOL)displayLocalPlayer;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })displayedRange;
- (id)error;
- (id)game;
- (id)initWithGame:(id)arg1;
- (void)loadScoresInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withCompletionHandler:(id)arg2;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })loadedRange;
- (BOOL)moreScoresAvailable;
- (id)player;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeToLoadForRank:(NSUInteger)arg1;
- (id)scoreAtIndex:(NSUInteger)arg1;
- (void)setAvailableScores:(id)arg1;
- (void)setComparePlayerScore:(id)arg1;
- (void)setDisplayedRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)setError:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)showcasedScoreAtShowcaseIndex:(NSUInteger)arg1;
- (BOOL)showcasedScoresAdjacent;
- (void)swapScores;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })totalRange;
- (id)visibleScoreAtIndex:(NSUInteger)arg1;

@end
