//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class AKDevice, NSDictionary, NSString;

@protocol AKAuthenticationContext 
@property(copy, nonatomic) AKDevice *companionDevice;
@property(copy, nonatomic) AKDevice *proxiedDevice;
@property(copy, nonatomic) NSString *appProvidedContext;
@property(copy, nonatomic) NSDictionary *appProvidedData;
@property(copy, nonatomic, setter=_setProxiedAppName:) NSString *_proxiedAppName;
@property(nonatomic) long long serviceType;
@property(copy, nonatomic) NSString *altDSID;
@end

