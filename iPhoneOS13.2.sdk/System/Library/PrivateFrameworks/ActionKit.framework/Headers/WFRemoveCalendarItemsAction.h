//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@interface WFRemoveCalendarItemsAction : WFAction
{
    unsigned long long _requiredConfirmations;
    unsigned long long _currentConfirmation;
}

@property(nonatomic) unsigned long long currentConfirmation; // @synthesize currentConfirmation=_currentConfirmation;
@property(nonatomic) unsigned long long requiredConfirmations; // @synthesize requiredConfirmations=_requiredConfirmations;
- (void)deleteItems:(id)arg1;
- (void)presentConfirmationToDeleteItems:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)accessResource;
- (unsigned long long)entityType;

@end

