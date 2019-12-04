//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface ICURLResponseAuthenticationProvider : NSObject <NSSecureCoding>
{
    long long _interactionLevel;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultProvider;
@property(readonly, nonatomic) long long interactionLevel; // @synthesize interactionLevel=_interactionLevel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)performAuthenticationUsingRequestContext:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)performAuthenticationToHandleResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)initWithUserInteractionLevel:(long long)arg1;

@end

