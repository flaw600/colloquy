NS_ASSUME_NONNULL_BEGIN

@class MVChatUser;
@class MVChatConnection;

extern NSString *MVChatUserWatchRuleMatchedNotification;
extern NSString *MVChatUserWatchRuleRemovedMatchedUserNotification;

@interface MVChatUserWatchRule : NSObject <NSCopying>
- (instancetype) initWithDictionaryRepresentation:(NSDictionary *) dictionary;
- (NSDictionary *) dictionaryRepresentation;

- (BOOL) isEqualToChatUserWatchRule:(MVChatUserWatchRule *) anotherRule;

- (BOOL) matchChatUser:(MVChatUser *) user;
- (void) removeMatchedUser:(MVChatUser *) user;
- (void) removeMatchedUsersForConnection:(MVChatConnection *) connection;

@property(strong, readonly) NSSet *matchedChatUsers;

@property(copy) NSString *nickname;
@property(readonly) BOOL nicknameIsRegularExpression;

@property(copy) NSString *realName;
@property(readonly) BOOL realNameIsRegularExpression;

@property(copy) NSString *username;
@property(readonly) BOOL usernameIsRegularExpression;

@property(copy) NSString *address;
@property(readonly) BOOL addressIsRegularExpression;

@property(copy) NSData *publicKey;

@property(getter=isInterim) BOOL interim;

@property(copy) NSArray *applicableServerDomains;

@end

NS_ASSUME_NONNULL_END
