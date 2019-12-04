//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupProcessIntent : SABaseClientBoundCommand
{
}

+ (id)processIntentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)processIntent;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(nonatomic) _Bool shouldRunHandleIntent;
@property(copy, nonatomic) NSString *jsonEncodedIntent;
@property(copy, nonatomic) NSArray *intentSlotKeyPaths;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property(nonatomic) _Bool allowsPunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

