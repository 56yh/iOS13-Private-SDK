//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ECAuthenticationScheme : NSObject
{
}

+ (id)authenticationSchemesForAccount:(id)arg1 connection:(id)arg2;
+ (id)schemeWithName:(id)arg1;
+ (void)registerSchemeClass:(Class)arg1;
+ (id)knownSchemes;
+ (void)initialize;
@property(readonly, nonatomic) NSString *humanReadableName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool requiresPassword;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (_Bool)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
@property(readonly, nonatomic) _Bool hasEncryption;
- (Class)authenticatorClass;
- (Class)connectionClassForAccountClass:(Class)arg1;

@end

