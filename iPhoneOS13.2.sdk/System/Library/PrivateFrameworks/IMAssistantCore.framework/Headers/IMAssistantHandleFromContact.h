//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, CNLabeledValue, NSString;

@interface IMAssistantHandleFromContact : NSObject
{
    CNContact *_contact;
    CNLabeledValue *_labeledEmailAddress;
    CNLabeledValue *_labeledPhoneNumber;
    NSString *_businessID;
    NSString *_displayID;
    long long _handleType;
}

@property(readonly, nonatomic) long long handleType; // @synthesize handleType=_handleType;
@property(readonly, nonatomic) NSString *displayID; // @synthesize displayID=_displayID;
@property(readonly, nonatomic) NSString *businessID; // @synthesize businessID=_businessID;
@property(readonly, nonatomic) CNLabeledValue *labeledPhoneNumber; // @synthesize labeledPhoneNumber=_labeledPhoneNumber;
@property(readonly, nonatomic) CNLabeledValue *labeledEmailAddress; // @synthesize labeledEmailAddress=_labeledEmailAddress;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)description;
- (_Bool)matchesIMHandle:(id)arg1;
- (_Bool)matchesHandleID:(id)arg1;
@property(readonly, nonatomic) NSString *personHandleLabel;
@property(readonly, nonatomic) long long personHandleType;
@property(readonly, nonatomic) NSString *handleID;
- (id)initWithBusinessID:(id)arg1;
- (id)initWithCNLabeledEmailAddress:(id)arg1 contact:(id)arg2;
- (id)initWithCNLabeledPhoneNumber:(id)arg1 contact:(id)arg2;
- (id)_initWithPhoneNumber:(id)arg1 emailAddress:(id)arg2 businessID:(id)arg3 handleType:(long long)arg4 contact:(id)arg5;

@end

