//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSString;

@interface NSURL (QueryParameters)
+ (id)faceTimeShowInCallUIURL;
+ (id)faceTimeLaunchForOutgoingConversationURL;
+ (id)faceTimeLaunchForIncomingCallURL;
+ (id)faceTimePromptURLWithURL:(id)arg1;
+ (id)faceTimeURLWithURL:(id)arg1;
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(_Bool)arg2;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5 audioOnly:(_Bool)arg6;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1;
+ (id)_faceTimeURLWithHandle:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3 forceAssist:(_Bool)arg4 suppressAssist:(_Bool)arg5 wasAssisted:(_Bool)arg6;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1 promptUser:(_Bool)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1;
+ (id)telephonyURLForTelEmergencyCall;
+ (id)telephonyURLForVoicemail;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)telephonyURLWithDestinationID:(id)arg1 promptUser:(_Bool)arg2;
+ (id)telephonyURLWithDestinationID:(id)arg1;
- (id)URLByDeletingQueryParameterWithKey:(id)arg1;
- (id)URLBySettingQueryParameterValue:(id)arg1 forKey:(id)arg2;
- (id)tuQueryParameters;
- (id)queryParameters;
- (_Bool)isShowInCallUIURL;
- (_Bool)isLaunchForOutgoingConversationURL;
- (_Bool)isLaunchForIncomingCallURL;
- (_Bool)isDialCallURL;
- (_Bool)hasNoPromptOption;
- (_Bool)isFaceTimeMultiwayURL;
- (_Bool)isFaceTimeAudioPromptURL;
- (_Bool)isFaceTimeAudioURL;
- (_Bool)isFaceTimePromptURL;
- (_Bool)isFaceTimeURL;
- (_Bool)_isPhoneNumberID:(id)arg1;
- (id)faceTimeDestinationAccount;
- (id)_mobilePhoneQueryParameters;
- (id)_mobilePhonePathParameters;
- (id)telephonyParameterDictionary;
@property(readonly) _Bool isVoicemailURL;
@property(readonly) _Bool isEmergencyCallURL;
@property(readonly) _Bool isEmergencyURL;
@property(readonly, nonatomic, getter=isBasebandLogURL) _Bool basebandLogURL;
- (id)webSafeTelephoneURL;
- (_Bool)isWebSafeTelephoneURL;
@property(readonly, copy, nonatomic) NSString *numberQualifiedForAddressBook;
@property(readonly, copy, nonatomic) NSString *formattedPhoneNumber;
- (_Bool)_hasScheme:(id)arg1;
- (_Bool)hasTelephonyScheme;
- (_Bool)isTelephonyPromptURL;
- (_Bool)isTelephonyURL;
- (_Bool)_dialAssistBooleanQueryParameterValueForKey:(id)arg1;
@property(readonly) _Bool wasAlreadyAssisted;
@property(readonly) _Bool suppressAssist;
@property(readonly) _Bool forceAssist;
@property(readonly) NSString *originatingUIIdentifier;
@property(readonly) int callService;
@property(readonly, nonatomic) int addressBookUID;
@property(readonly) NSString *phoneNumber;
- (id)_destinationIDConvertingNumbersToLatin:(_Bool)arg1;
@end

