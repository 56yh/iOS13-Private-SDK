//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSMutableArray;

@interface _MFMailboxUidChildrenEnumerator : NSEnumerator
{
    NSMutableArray *_mailboxes;
    unsigned long long _index;
    _Bool _includeHidden;
}

- (id)nextObject;
- (id)_initWithMailbox:(id)arg1 includeHiddenChildren:(_Bool)arg2;

@end

