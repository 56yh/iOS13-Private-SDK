//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMContact, NSNumber;

@interface EDAMIdentity : FATObject
{
    NSNumber *_id;
    EDAMContact *_contact;
    NSNumber *_userId;
    NSNumber *_deactivated;
    NSNumber *_sameBusiness;
    NSNumber *_blocked;
    NSNumber *_userConnected;
    NSNumber *_eventId;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSNumber *userConnected; // @synthesize userConnected=_userConnected;
@property(retain, nonatomic) NSNumber *blocked; // @synthesize blocked=_blocked;
@property(retain, nonatomic) NSNumber *sameBusiness; // @synthesize sameBusiness=_sameBusiness;
@property(retain, nonatomic) NSNumber *deactivated; // @synthesize deactivated=_deactivated;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) EDAMContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;

@end

