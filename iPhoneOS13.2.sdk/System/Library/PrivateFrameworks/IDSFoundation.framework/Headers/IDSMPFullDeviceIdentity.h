//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSFoundation/IDSMPIdentity.h>

@interface IDSMPFullDeviceIdentity : IDSMPIdentity
{
}

+ (id)deviceIdentityWithFullAdminServiceIdentity:(id)arg1 error:(id *)arg2;
+ (id)deviceIdentityFromDataRepresentation:(id)arg1 publicAdminServiceIdentity:(id)arg2 error:(id *)arg3;
- (id)dataRepresentationWithError:(id *)arg1;
- (id)publicDeviceIdentityWithError:(id *)arg1;
- (_Bool)purgeFromKeychain:(id *)arg1;

@end

