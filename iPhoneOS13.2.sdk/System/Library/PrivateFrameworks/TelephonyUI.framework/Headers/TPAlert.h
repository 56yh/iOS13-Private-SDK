//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TPAlert : NSObject
{
    id /* block */ _completion;
    struct __CFUserNotification *_userNotification;
}

@property(nonatomic) struct __CFUserNotification *userNotification; // @synthesize userNotification=_userNotification;
@property(copy, nonatomic) id /* block */ completion; // @synthesize completion=_completion;
- (void)otherResponse;
- (void)alternateResponse;
- (void)defaultResponse;
- (id)otherButtonTitle;
- (id)alternateButtonTitle;
- (id)defaultButtonTitle;
- (id)message;
- (id)title;
- (void)showOnViewController:(id)arg1;
- (void)show;
- (void)dealloc;

@end

