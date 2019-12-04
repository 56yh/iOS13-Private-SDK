//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SOUtils : NSObject
{
}

+ (_Bool)checkSignatureOfFile:(id)arg1 teamIdentifier:(id *)arg2 trusted:(_Bool *)arg3 signedBySet:(long long *)arg4 certificates:(id *)arg5 error:(id *)arg6;
+ (id)signatureSetToString:(long long)arg1;
+ (_Bool)currentProcessInSystemSession;
+ (id)processNameForPID:(int)arg1;
+ (id)currentProcessName;
+ (id)bundleIdentifierFromAuditToken:(CDStruct_6ad76789)arg1;
+ (int)pidFromAuditToken:(CDStruct_6ad76789)arg1;
+ (_Bool)auditTokenFromData:(id)arg1 auditToken:(CDStruct_6ad76789 *)arg2;
+ (id)mapArray:(id)arg1 usingBlock:(id /* block */)arg2;
+ (_Bool)isInternalBuild;
+ (id)currentProcessContainerPath;
+ (_Bool)sandboxAllowsXPC:(const char *)arg1;
+ (_Bool)currentProcessIsSandboxed;
+ (_Bool)checkEntitlementFromXPC:(id)arg1;
+ (void)unmapFile:(int)arg1 data:(id)arg2;
+ (int)mmapFile:(id)arg1 mode:(long long)arg2 mmapData:(id *)arg3;

@end

