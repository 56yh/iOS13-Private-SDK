//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _JavascriptOperation : NSObject
{
    NSString *_javascript;
    id /* block */ _completion;
}

@property(copy, nonatomic) id /* block */ completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *javascript; // @synthesize javascript=_javascript;
- (void)submitJavascript:(id)arg1 finishBlock:(id /* block */)arg2;
- (id)initWithJavascript:(id)arg1 completion:(id /* block */)arg2;

@end

