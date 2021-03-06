/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhoneCallStarted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSURL *phoneLogId;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)callStarted;
+ (id)callStartedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)phoneLogId;
- (void)setPhoneLogId:(id)arg1;

@end
