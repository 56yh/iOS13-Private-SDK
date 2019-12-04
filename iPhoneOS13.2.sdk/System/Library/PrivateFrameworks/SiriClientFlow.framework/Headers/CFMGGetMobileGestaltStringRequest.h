//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SiriClientFlow/CFLocalAceHandling-Protocol.h>

@class NSString;

@interface CFMGGetMobileGestaltStringRequest : SABaseClientBoundCommand <CFLocalAceHandling>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getMobileGestaltStringRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getMobileGestaltStringRequest;
+ (_Bool)isValidKey:(id)arg1;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *key;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(id /* block */)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

