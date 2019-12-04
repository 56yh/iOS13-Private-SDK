//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WebBookmark, WebBookmarkCollection;

@interface BAChangeRecord : NSObject
{
    WebBookmarkCollection *_collection;
    WebBookmark *_bookmark;
    int _changeType;
}

@property(readonly, nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(readonly, nonatomic) WebBookmarkCollection *collection; // @synthesize collection=_collection;
- (id)description;
- (id)_changedAttributeDescription;
- (id)_changeTypeDescription;
- (id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2 changeType:(int)arg3;

@end

