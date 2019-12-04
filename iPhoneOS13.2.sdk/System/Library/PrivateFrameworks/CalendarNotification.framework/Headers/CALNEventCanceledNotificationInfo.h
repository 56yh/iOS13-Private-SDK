//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EKCalendarEventInvitationNotification, NSDate, NSDictionary, NSString, NSURL;

@interface CALNEventCanceledNotificationInfo : NSObject
{
    _Bool _isDelegate;
    NSString *_sourceClientIdentifier;
    NSURL *_launchURL;
    NSDate *_expirationDate;
    EKCalendarEventInvitationNotification *_eventInvitationNotification;
    NSDictionary *_eventRepresentationDictionary;
    NSString *_sourceTitle;
    NSString *_sourceIdentifier;
}

@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(readonly, copy, nonatomic) NSString *sourceTitle; // @synthesize sourceTitle=_sourceTitle;
@property(readonly, nonatomic) _Bool isDelegate; // @synthesize isDelegate=_isDelegate;
@property(readonly, copy, nonatomic) NSDictionary *eventRepresentationDictionary; // @synthesize eventRepresentationDictionary=_eventRepresentationDictionary;
@property(readonly, nonatomic) EKCalendarEventInvitationNotification *eventInvitationNotification; // @synthesize eventInvitationNotification=_eventInvitationNotification;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(readonly, copy, nonatomic) NSString *sourceClientIdentifier; // @synthesize sourceClientIdentifier=_sourceClientIdentifier;
- (id)description;
- (id)initWithSourceClientIdentifier:(id)arg1 launchURL:(id)arg2 expirationDate:(id)arg3 eventInvitationNotification:(id)arg4 eventRepresentationDictionary:(id)arg5 isDelegate:(_Bool)arg6 sourceTitle:(id)arg7 sourceIdentifier:(id)arg8;

@end

