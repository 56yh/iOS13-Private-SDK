//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLSecurity : NSObject
{
}

+ (_Bool)connectionIsEntitledForPhotoKit:(id)arg1;
+ (_Bool)isEntitledForPhotoKit;
+ (_Bool)containsPhotoKitEntitlement:(id)arg1;
+ (id)connection:(id)arg1 grantedEntitlements:(id)arg2;
+ (_Bool)connection:(id)arg1 hasEntitlement:(id)arg2;
+ (id)connection:(id)arg1 valueForEntitlement:(id)arg2;
+ (id)connection:(id)arg1 valuesForEntitlements:(id)arg2;
+ (_Bool)auditToken:(CDStruct_6ad76789)arg1 hasEntitlement:(id)arg2;
+ (_Bool)secTask:(struct __SecTask *)arg1 hasEntitlement:(id)arg2;
+ (id)_secTask:(struct __SecTask *)arg1 grantedEntitlements:(id)arg2;

@end

