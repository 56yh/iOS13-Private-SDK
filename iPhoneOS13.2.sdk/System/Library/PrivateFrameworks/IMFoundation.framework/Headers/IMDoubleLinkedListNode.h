//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMDoubleLinkedListNode : NSObject
{
    IMDoubleLinkedListNode *_prev;
    IMDoubleLinkedListNode *_next;
    id _object;
}

@property(retain) id object; // @synthesize object=_object;
@property(retain) IMDoubleLinkedListNode *next; // @synthesize next=_next;
@property(retain) IMDoubleLinkedListNode *prev; // @synthesize prev=_prev;
- (void)orphan;
- (void)removeFromList;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end
