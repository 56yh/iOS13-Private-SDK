//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class NSURL;

@interface UIOpenURLAction : BSAction
{
}

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)UIActionType;
@property(readonly, copy, nonatomic) NSURL *url;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithURL:(id)arg1;

@end

