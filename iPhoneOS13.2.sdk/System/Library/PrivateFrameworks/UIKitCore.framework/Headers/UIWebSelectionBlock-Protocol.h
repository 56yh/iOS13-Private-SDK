//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class DOMDocument, DOMNode, DOMRange, WebFrame;
@protocol UIWebSelectionBlock;

@protocol UIWebSelectionBlock 
- (DOMDocument *)enclosingDocument;
- (DOMRange *)rangeOfContents;
- (_Bool)canShrinkDirectlyToTextOnly;
- (_Bool)containsRange:(DOMRange *)arg1;
- (DOMRange *)asDomRange;
- (DOMNode *)asDomNode;
- (_Bool)selectable;
- (_Bool)rendersAsBlock;
- (_Bool)strictlyContainsBlock:(id <UIWebSelectionBlock>)arg1;
- (_Bool)containsBlock:(id <UIWebSelectionBlock>)arg1;
- (_Bool)isSameBlock:(id <UIWebSelectionBlock>)arg1;
- (id <UIWebSelectionBlock>)largerParent;
- (id <UIWebSelectionBlock>)parentBlock;
- (struct CGRect)boundingRectAndInsideFixedPosition:(int *)arg1;
- (struct CGRect)boundingRect;
- (WebFrame *)webFrame;
@end

