//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmailCore/ECAuthScheme.h>

@interface ECOAuth2AuthScheme : ECAuthScheme
{
}

+ (id)oauth2AuthScheme;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)supportedSASLMechanisms;
- (_Bool)requiresPassword;
- (_Bool)requiresUsername;
- (unsigned int)applescriptScheme;
- (id)humanReadableName;
- (id)name;
- (void)dealloc;

@end

