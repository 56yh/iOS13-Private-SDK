//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class LAContext, NSDictionary, NSError, NSString;

@protocol LAUIAuthenticationDelegate 

@optional
- (NSString *)localizedCallerName;
- (NSString *)callerIconBundlePath;
- (void)processBiometricMatchWithCompletionHandler:(void (^)(void))arg1;
- (NSString *)localizedSubTitleForMechanisms:(unsigned long long)arg1;
- (void)biometricNoMatch;
- (void)authenticationResult:(NSDictionary *)arg1 error:(NSError *)arg2 context:(LAContext *)arg3;
@end
