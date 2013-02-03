/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSArray, IMAccount, NSData, NSMutableArray, IMPerson, NSAttributedString, NSDictionary, NSString, NSURL, NSDate, NSSet;

@interface IMHandle : IMDirectlyObservableObject <NSCoding> {
    NSString *_IDWithTrimmedServer;
    NSString *_IDWithoutResource;
    NSArray *_abEmails;
    NSString *_abFirstName;
    NSString *_abFullName;
    NSString *_abLastName;
    NSString *_abNickname;
    IMAccount *_account;
    NSUInteger _authRequestStatus;
    BOOL _beingTornDown;
    BOOL _blockNotifications;
    NSString *_canonicalFormOfID;
    unsigned long long _capabilities;
    NSDictionary *_certs;
    BOOL _customPictureChecked;
    NSString *_displayID;
    NSArray *_emails;
    NSDictionary *_extraProps;
    NSDate *_feedUpdatedDate;
    NSString *_firstName;
    NSString *_fullName;
    NSSet *_groups;
    NSString *_guid;
    BOOL _hasTemporaryWatch;
    NSString *_id;
    NSDate *_idleSince;
    BOOL _isAnonymous;
    BOOL _isBot;
    BOOL _isBuddy;
    BOOL _isMobile;
    BOOL _isRetainingAccount;
    NSString *_lastName;
    NSString *_nickname;
    NSMutableArray *_notificationNameQueue;
    NSMutableArray *_notificationQueue;
    NSInteger _notificationQueueCount;
    NSDictionary *_otherServiceIDs;
    IMPerson *_person;
    NSData *_pictureData;
    NSDictionary *_presenceProps;
    NSUInteger _prevStatus;
    NSString *_prevStatusMsg;
    NSInteger _priority;
    NSString *_processedStatusMsg;
    NSUInteger _resourceIndex;
    NSAttributedString *_richStatusMsg;
    NSUInteger _sortOrder;
    NSUInteger _status;
    NSURL *_statusMessageURL;
    NSString *_statusMsg;
    NSURL *_statusURL;
    NSString *_uniqueName;
    NSDate *_whenStatusChanged;
    NSDate *_whenWentOffline;
    BOOL _willUpdateIdleTime;
}

@property(retain) IMPerson *person; /* unknown property attribute: SsetIMPerson: */
@property(readonly) NSString *ID;
@property(readonly) NSString *IDWithoutResource;
@property(readonly) IMAccount *account;
@property(readonly) NSArray *accountSiblingsArray;
@property(readonly) NSString *accountTypeName;
@property(retain) NSData *customPictureData;
@property(readonly) NSArray *dependentIMHandles;
@property(readonly) NSString *displayID;
@property(readonly) NSString *email;
@property(readonly) NSArray *emails;
@property(readonly) NSData *encryptionCertificate;
@property(readonly) NSArray *existingAccountSiblingsArray;
@property(readonly) NSDictionary *extraProperties;
@property(readonly) NSDate *feedUpdatedDate;
@property(readonly) NSString *firstName;
@property(readonly) NSString *fullName;
@property(readonly) NSSet *groups;
@property(readonly) NSArray *groupsArray;
@property(readonly) NSString *guid;
@property(readonly) NSString *idleString;
@property(readonly) NSString *lastName;
@property(readonly) NSString *mobileDeviceName;
@property(readonly) NSString *name;
@property(readonly) NSString *nameAndEmail;
@property(readonly) NSString *nameAndID;
@property(readonly) NSString *nameOfStatus;
@property(readonly) NSString *nickname;
@property(readonly) NSString *offlineString;
@property(readonly) NSDictionary *otherServiceIDs;
@property(readonly) NSData *pictureData;
@property(readonly) NSDictionary *presenceProperties;
@property(readonly) NSString *previousStatusMessage;
@property(readonly) NSString *resource;
@property(readonly) NSAttributedString *richStatusMessage;
@property(readonly) NSString *server;
@property(readonly) IMServiceImpl *service;
@property(readonly) NSSet *siblings;
@property(readonly) NSArray *siblingsArray;
@property(readonly) NSData *signingCertificate;
@property(readonly) NSString *statusMessage;
@property(readonly) NSURL *statusURL;
@property(readonly) NSString *uniqueName;
@property(readonly) BOOL areABPropertiesRecent;
@property(readonly) NSUInteger authRequestStatus;
@property(readonly) id bestAccountSibling;
@property(readonly) id bestSibling;
@property(readonly) BOOL canBeAdded;
@property(readonly) BOOL canBeDeleted;
@property(readonly) BOOL canBeSecure;
@property(readonly) unsigned long long capabilities;
@property(readonly) NSInteger certificateStatus;
@property(readonly) BOOL couldBeSecure;
@property(readonly) NSUInteger encryptionTrustResult;
@property(readonly) id existingIMHandleWithoutResource;
@property(readonly) BOOL hasAudio;
@property(readonly) BOOL hasConferencing;
@property(readonly) BOOL hasLocation;
@property(readonly) BOOL hasMultiwayAudio;
@property(readonly) BOOL hasMultiwayVideo;
@property(readonly) BOOL hasName;
@property(readonly) BOOL hasNoConferencingCaps;
@property(readonly) BOOL hasOtherSiblings;
@property(readonly) BOOL hasResource;
@property(readonly) BOOL hasServer;
@property(readonly) BOOL hasValidCertificates;
@property(readonly) BOOL hasVideo;
@property(readonly) double idleTime;
@property(readonly) id imHandleWithoutResource;
@property(readonly) BOOL isAnonymous;
@property(readonly) BOOL isBlocked;
@property(readonly) BOOL isBot;
@property(readonly) BOOL isBuddy;
@property(readonly) BOOL isConferenceAvailable;
@property(readonly) BOOL isLoginIMHandle;
@property(readonly) BOOL isLoginIMHandleForAnyAccount;
@property(readonly) BOOL isMobile;
@property(readonly) BOOL isSystemUser;
@property(readonly) BOOL isVisiblyBlocked;
@property(readonly) NSUInteger previousStatus;
@property(readonly) NSInteger priority;
@property NSInteger securityLevel;
@property(readonly) NSUInteger signingTrustResult;
@property(readonly) NSUInteger status;
@property(readonly) BOOL supportsARDMuxing;
@property(readonly) BOOL supportsWidescreenVideo;
@property(readonly) double timeSinceStatusChanged;
@property(readonly) double timeSinceWentOffline;
@property(readonly) BOOL watchingIMHandle;

+ (void)_loadStatusNames;
+ (id)bestIMHandleInArray:(id)arg1;
+ (id)filterIMHandlesForAccountSiblings:(id)arg1 onAccount:(id)arg2;
+ (id)filterIMHandlesForBestAccountSiblings:(id)arg1;
+ (id)imHandlesForIMPerson:(id)arg1;
+ (id)nameOfStatus:(NSUInteger)arg1;
+ (BOOL)notificationsEnabled;
+ (void)setNotificationsEnabled:(BOOL)arg1;

- (id)ID;
- (id)IDWithoutResource;
- (id)_IDWithTrimmedServer;
- (id)_abPersonCreateIfNeeded;
- (void)_clearStatusMessageURLCache;
- (void)_filterStatusMessage;
- (BOOL)_hasABName;
- (BOOL)_hasServiceNameProperties;
- (void)_imPersonPictureChanged:(id)arg1;
- (NSInteger)_individualSecurityLevel;
- (BOOL)_isMyIDInList:(id)arg1;
- (id)_nameForComparisonPreferFirst:(BOOL)arg1;
- (id)_nameUsingUnique:(BOOL)arg1;
- (void)_postNotification:(id)arg1;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_registerForIMPerson;
- (void)_removeAccountReference:(id)arg1;
- (void)_scheduleIdleTimeUpdate;
- (void)_setABPersonFirstName:(id)arg1 lastName:(id)arg2;
- (void)_setBaseFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3;
- (void)_setExtraProperties:(id)arg1;
- (void)_stopRetainingAccount:(id)arg1;
- (unsigned long)_trustResultForKey:(id)arg1;
- (void)_unregisterFromIMPerson;
- (void)_updateIdleTime;
- (void)_updateIdleTimer;
- (void)_updateStatusBasedOnAuthRequestStatus;
- (id)account;
- (id)accountSiblingsArray;
- (id)accountTypeName;
- (BOOL)areABPropertiesRecent;
- (NSUInteger)authRequestStatus;
- (void)beginNotificationQueue;
- (id)bestAccountSibling;
- (id)bestIMHandleForAccount:(id)arg1 onService:(id)arg2 inGroup:(id)arg3 otherThan:(id)arg4;
- (id)bestIMHandleForAccount:(id)arg1;
- (id)bestIMHandleForService:(id)arg1;
- (id)bestSibling;
- (id)bestSiblingInGroup:(id)arg1 otherThan:(id)arg2;
- (id)bestSiblingInGroup:(id)arg1;
- (BOOL)canBeAdded;
- (BOOL)canBeDeleted;
- (BOOL)canBeSecure;
- (unsigned long long)capabilities;
- (NSInteger)certificateStatus;
- (void)clearABPerson;
- (NSInteger)compareAccountNames:(id)arg1;
- (NSInteger)compareFirstNames:(id)arg1;
- (NSInteger)compareIDs:(id)arg1;
- (NSInteger)compareLastNames:(id)arg1;
- (NSInteger)compareStatus:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)couldBeSecure;
- (id)customPictureData;
- (void)customPictureDataChanged:(id)arg1 key:(id)arg2;
- (void)dealloc;
- (id)dependentIMHandles;
- (id)description;
- (void)disableCertificates;
- (id)displayID;
- (id)email;
- (id)emails;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionCertificate;
- (unsigned long)encryptionTrustResult;
- (id)existingAccountSiblingsArray;
- (id)existingIMHandleWithoutResource;
- (id)extraProperties;
- (id)feedUpdatedDate;
- (void)finalize;
- (id)firstName;
- (id)fullName;
- (id)groups;
- (id)groupsArray;
- (id)guid;
- (BOOL)hasAudio;
- (BOOL)hasCapability:(unsigned long long)arg1;
- (BOOL)hasConferencing;
- (BOOL)hasLocation;
- (BOOL)hasMultiwayAudio;
- (BOOL)hasMultiwayVideo;
- (BOOL)hasName;
- (BOOL)hasNoConferencingCaps;
- (BOOL)hasOtherSiblings;
- (BOOL)hasResource;
- (BOOL)hasServer;
- (BOOL)hasValidCertificates;
- (BOOL)hasVideo;
- (NSUInteger)hash;
- (id)idleString;
- (double)idleTime;
- (id)imHandleForOtherAccount:(id)arg1;
- (id)imHandleRegistrarGUID;
- (id)imHandleWithoutResource;
- (id)init;
- (id)initWithAccount:(id)arg1 ID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAccountSiblingOf:(id)arg1;
- (BOOL)isAnonymous;
- (BOOL)isBetterThanIMHandle:(id)arg1;
- (BOOL)isBlocked;
- (BOOL)isBot;
- (BOOL)isBuddy;
- (BOOL)isConferenceAvailable;
- (BOOL)isLoginIMHandle;
- (BOOL)isLoginIMHandleForAnyAccount;
- (BOOL)isMobile;
- (BOOL)isSiblingOf:(id)arg1;
- (BOOL)isSystemUser;
- (BOOL)isVisiblyBlocked;
- (id)lastName;
- (BOOL)matchesIMHandle:(id)arg1;
- (id)mobileDeviceName;
- (id)name;
- (id)nameAndEmail;
- (id)nameAndID;
- (id)nameOfStatus;
- (id)nickname;
- (id)offlineString;
- (id)otherServiceIDs;
- (id)person;
- (id)pictureData;
- (void)postNotificationName:(id)arg1;
- (id)presenceProperties;
- (NSUInteger)previousStatus;
- (id)previousStatusMessage;
- (NSInteger)priority;
- (void)propertiesChanged:(id)arg1;
- (id)publicAPIPropertiesDictionary;
- (oneway void)release;
- (void)releaseNotificationQueue;
- (void)requestValueOfProperty:(id)arg1;
- (BOOL)resetABPerson;
- (void)resetABProperties;
- (void)resetUniqueName;
- (id)resource;
- (id)richStatusMessage;
- (NSInteger)securityLevel;
- (void)sendNotificationABPersonChanged;
- (id)server;
- (id)service;
- (void)setAnonymous:(BOOL)arg1;
- (void)setAuthRequestStatus:(NSUInteger)arg1;
- (void)setBlocked:(BOOL)arg1;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setCertificates:(id)arg1;
- (void)setCustomPictureData:(id)arg1 key:(id)arg2;
- (void)setCustomPictureData:(id)arg1;
- (void)setEmail:(id)arg1 andUpdateABPerson:(BOOL)arg2;
- (void)setEmail:(id)arg1;
- (void)setEmails:(id)arg1 andUpdateABPerson:(BOOL)arg2;
- (void)setEmails:(id)arg1;
- (void)setFeedUpdatedDate:(id)arg1;
- (void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 andUpdateABPerson:(BOOL)arg4;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (void)setHasTemporaryWatch:(BOOL)arg1;
- (void)setIMPerson:(id)arg1;
- (void)setIdleSince:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setIsBot:(BOOL)arg1;
- (void)setIsMobile:(BOOL)arg1;
- (void)setLocalNickname:(id)arg1;
- (void)setOtherServiceIDs:(id)arg1;
- (void)setPersonStatus:(NSUInteger)arg1;
- (void)setPresenceProperties:(id)arg1;
- (void)setPriority:(NSInteger)arg1;
- (void)setSecurityLevel:(NSInteger)arg1;
- (void)setStatus:(NSUInteger)arg1 message:(id)arg2 richMessage:(id)arg3;
- (void)setStatusURLFromString:(id)arg1;
- (void)setUniqueName:(id)arg1;
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2;
- (BOOL)shouldQueueNotifications;
- (id)siblings;
- (id)siblingsArray;
- (id)signingCertificate;
- (unsigned long)signingTrustResult;
- (NSUInteger)sortOrderInGroup:(id)arg1;
- (NSUInteger)status;
- (void)statusChanged:(NSUInteger)arg1 message:(id)arg2;
- (void)statusChanged:(NSUInteger)arg1;
- (id)statusMessage;
- (void)statusMessageChanged:(id)arg1;
- (id)statusURL;
- (BOOL)supportsARDMuxing;
- (BOOL)supportsWidescreenVideo;
- (double)timeSinceStatusChanged;
- (double)timeSinceWentOffline;
- (id)uniqueName;
- (BOOL)watchingIMHandle;

@end