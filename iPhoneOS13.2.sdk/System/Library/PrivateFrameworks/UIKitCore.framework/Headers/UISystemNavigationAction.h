//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class NSArray;

@interface UISystemNavigationAction : BSAction
{
    NSArray *_destinations;
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)UIActionType;
- (id)_destinationContextForResponseDestination:(unsigned long long)arg1;
- (_Bool)sendResponseForDestination:(unsigned long long)arg1;
- (id)sceneIdentifierForDestination:(unsigned long long)arg1;
- (id)URLForDestination:(unsigned long long)arg1;
- (id)bundleIdForDestination:(unsigned long long)arg1;
- (id)titleForDestination:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *destinations; // @synthesize destinations=_destinations;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithDestinationContexts:(id)arg1 forResponseOnQueue:(id)arg2 withHandler:(id /* block */)arg3;

@end

