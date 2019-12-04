//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class ICClientInfo, ICDeviceInfo, ICNetworkConstraints, ICURLResponseAuthenticationProvider, NSString;

@interface ICRequestContext : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _allowsMutation:1;
    ICNetworkConstraints *_networkConstraints;
    ICClientInfo *_clientInfo;
    ICDeviceInfo *_deviceInfo;
    ICURLResponseAuthenticationProvider *_authenticationProvider;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) ICURLResponseAuthenticationProvider *authenticationProvider; // @synthesize authenticationProvider=_authenticationProvider;
@property(readonly, nonatomic) ICDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, copy, nonatomic) ICClientInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, copy, nonatomic) ICNetworkConstraints *networkConstraints; // @synthesize networkConstraints=_networkConstraints;
- (_Bool)_allowsMutation;
@property(readonly, copy, nonatomic) NSString *userAgent;
- (void)setNetworkConstraints:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setAuthenticationProvider:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithClientInfo:(id)arg1 authenticationProvider:(id)arg2;
- (id)initWithClientInfo:(id)arg1;

@end

