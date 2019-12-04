//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFUUIDProvider-Protocol.h>

@class NSString, WFAction;

@interface WFInputMigrationUUIDProvider : NSObject <WFUUIDProvider>
{
    WFAction *_action;
    unsigned long long _position;
}

@property(readonly, nonatomic) unsigned long long position; // @synthesize position=_position;
@property(readonly, nonatomic) WFAction *action; // @synthesize action=_action;
- (id)generateOutputUUIDForAction:(id)arg1;
- (id)initWithAction:(id)arg1 atPosition:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

