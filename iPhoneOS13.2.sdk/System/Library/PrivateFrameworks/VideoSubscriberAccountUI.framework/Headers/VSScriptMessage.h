//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VSScriptSecurityOrigin;

__attribute__((visibility("hidden")))
@interface VSScriptMessage : NSObject
{
    NSString *_body;
    VSScriptSecurityOrigin *_source;
    VSScriptSecurityOrigin *_target;
}

@property(retain, nonatomic) VSScriptSecurityOrigin *target; // @synthesize target=_target;
@property(retain, nonatomic) VSScriptSecurityOrigin *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
- (id)description;

@end

