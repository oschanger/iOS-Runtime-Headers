/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKScore, NSString, NSArray;

@interface GKLeaderboard : NSObject {
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    NSString *_category;
    NSInteger _loadingCount;
    GKScore *_localPlayerScore;
    NSUInteger _maxRange;
    NSArray *_playerIDs;
    NSInteger _playerScope;
    } _range;
    NSArray *_scores;
    NSInteger _sequenceNumber;
    NSInteger _timeScope;
    NSString *_title;
}

@property(retain) NSString *category;
@property(retain) GKScore *localPlayerScore;
@property(retain) NSArray *playerIDs;
@property(retain) NSArray *scores;
@property(retain) NSString *title;
@property(getter=isLoading,readonly) BOOL loading;
@property NSInteger loadingCount;
@property NSUInteger maxRange;
@property NSInteger playerScope;
@property _NSRange range;
@property NSInteger sequenceNumber;
@property NSInteger timeScope;

+ (void)loadCategoriesForGame:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadCategoriesWithCompletionHandler:(id)arg1;

- (id)category;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithPlayerIDs:(id)arg1;
- (BOOL)isLoading;
- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(id)arg2;
- (void)loadScoresWithCompletionHandler:(id)arg1;
- (NSInteger)loadingCount;
- (id)localPlayerScore;
- (NSUInteger)maxRange;
- (id)playerIDs;
- (NSInteger)playerScope;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })range;
- (id)scores;
- (NSInteger)sequenceNumber;
- (void)setCategory:(id)arg1;
- (void)setLoadingCount:(NSInteger)arg1;
- (void)setLocalPlayerScore:(id)arg1;
- (void)setMaxRange:(NSUInteger)arg1;
- (void)setPlayerIDs:(id)arg1;
- (void)setPlayerScope:(NSInteger)arg1;
- (void)setRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)setScores:(id)arg1;
- (void)setSequenceNumber:(NSInteger)arg1;
- (void)setTimeScope:(NSInteger)arg1;
- (void)setTitle:(id)arg1;
- (NSInteger)timeScope;
- (id)title;

@end
