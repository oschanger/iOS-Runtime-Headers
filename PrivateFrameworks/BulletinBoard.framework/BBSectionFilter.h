/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSectionFilter : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    BOOL  _enabled;
    NSString * _filterID;
}

@property (nonatomic, copy) NSString *displayName;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic, copy) NSString *filterID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)filterID;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1;
- (BOOL)isEnabled;
- (BOOL)isEqual:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFilterID:(id)arg1;

@end