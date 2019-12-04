//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSMetricsEvent, NSDictionary, NSString, NSURL, NSURLRequest;

@interface AMSUserNotificationAction : NSObject
{
    NSString *_identifier;
    NSURL *_defaultURL;
    NSString *_title;
    NSURLRequest *_request;
    AMSMetricsEvent *_metricsEvent;
    NSDictionary *_userInfo;
    long long _style;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) AMSMetricsEvent *metricsEvent; // @synthesize metricsEvent=_metricsEvent;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *defaultURL; // @synthesize defaultURL=_defaultURL;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long un_ActionOptions;
- (id)generateUserInfoAction;
- (id)initWithUserInfoAction:(id)arg1;
- (id)initWithTitle:(id)arg1 style:(long long)arg2;
- (id)initWithTitle:(id)arg1;
- (id)init;

@end

