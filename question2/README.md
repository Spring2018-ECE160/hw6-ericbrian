## Question 1
(K&R Exercise 5-13) Write the program <code>tail</code>, which prints the last n lines of its input. By default, n is 10, let us say, but it can be changed by an optional argument, so that

<code>    tail -n</code>

prints the last n lines. The program should behave rationally no matter how unreasonable the input or the value of n. Write the program so it makes the best use of available storage; lines should be stored as in the sorting program of Seciton 5.6, not in a two-dimensional array of fixed size.

Compile Steps: 

Example 1 (Thesis.txt): 
bchun@DESKTOP-48N88BC gcc tail.c Output: bchun@DESKTOP-48N88BC ~/hw6-ericbrian/question2
$ ./a.exe -n < Thesis.txt
number: 10
heading for the far-off future.

The cruel angel's thesis
will soon take flight through the window,

with surging, hot pathos,
if you betray your memories.

Embracing this sky [universe] and shining,
young boy, become the legend

Example 2 (bible.txt): 
bchun@DESKTOP-48N88BC ~/hw6-ericbrian/question2
$ ./a.exe -n < bible.txt
number: 2000
and of the commandment of us the apostles of the Lord and Saviour: 3:3
Knowing this first, that there shall come in the last days scoffers,
walking after their own lusts, 3:4 And saying, Where is the promise of
his coming? for since the fathers fell asleep, all things continue as
they were from the beginning of the creation.

3:5 For this they willingly are ignorant of, that by the word of God
the heavens were of old, and the earth standing out of the water and
in the water: 3:6 Whereby the world that then was, being overflowed
with water, perished: 3:7 But the heavens and the earth, which are
now, by the same word are kept in store, reserved unto fire against
the day of judgment and perdition of ungodly men.

3:8 But, beloved, be not ignorant of this one thing, that one day is
with the Lord as a thousand years, and a thousand years as one day.

3:9 The Lord is not slack concerning his promise, as some men count
slackness; but is longsuffering to us-ward, not willing that any
should perish, but that all should come to repentance.

3:10 But the day of the Lord will come as a thief in the night; in the
which the heavens shall pass away with a great noise, and the elements
shall melt with fervent heat, the earth also and the works that are
therein shall be burned up.

3:11 Seeing then that all these things shall be dissolved, what manner
of persons ought ye to be in all holy conversation and godliness, 3:12
Looking for and hasting unto the coming of the day of God, wherein the
heavens being on fire shall be dissolved, and the elements shall melt
with fervent heat?  3:13 Nevertheless we, according to his promise,
look for new heavens and a new earth, wherein dwelleth righteousness.

3:14 Wherefore, beloved, seeing that ye look for such things, be
diligent that ye may be found of him in peace, without spot, and
blameless.

3:15 And account that the longsuffering of our Lord is salvation; even
as our beloved brother Paul also according to the wisdom given unto
him hath written unto you; 3:16 As also in all his epistles, speaking
in them of these things; in which are some things hard to be
understood, which they that are unlearned and unstable wrest, as they
do also the other scriptures, unto their own destruction.

3:17 Ye therefore, beloved, seeing ye know these things before, beware
lest ye also, being led away with the error of the wicked, fall from
your own stedfastness.

3:18 But grow in grace, and in the knowledge of our Lord and Saviour
Jesus Christ. To him be glory both now and for ever. Amen.




The First Epistle General of John


1:1 That which was from the beginning, which we have heard, which we
have seen with our eyes, which we have looked upon, and our hands have
handled, of the Word of life; 1:2 (For the life was manifested, and we
have seen it, and bear witness, and shew unto you that eternal life,
which was with the Father, and was manifested unto us;) 1:3 That which
we have seen and heard declare we unto you, that ye also may have
fellowship with us: and truly our fellowship is with the Father, and
with his Son Jesus Christ.

1:4 And these things write we unto you, that your joy may be full.

1:5 This then is the message which we have heard of him, and declare
unto you, that God is light, and in him is no darkness at all.

1:6 If we say that we have fellowship with him, and walk in darkness,
we lie, and do not the truth: 1:7 But if we walk in the light, as he
is in the light, we have fellowship one with another, and the blood of
Jesus Christ his Son cleanseth us from all sin.

1:8 If we say that we have no sin, we deceive ourselves, and the truth
is not in us.

1:9 If we confess our sins, he is faithful and just to forgive us our
sins, and to cleanse us from all unrighteousness.

1:10 If we say that we have not sinned, we make him a liar, and his
word is not in us.

2:1 My little children, these things write I unto you, that ye sin
not.

And if any man sin, we have an advocate with the Father, Jesus Christ
the righteous: 2:2 And he is the propitiation for our sins: and not
for our's only, but also for the sins of the whole world.

2:3 And hereby we do know that we know him, if we keep his
commandments.

2:4 He that saith, I know him, and keepeth not his commandments, is a
liar, and the truth is not in him.

2:5 But whoso keepeth his word, in him verily is the love of God
perfected: hereby know we that we are in him.

2:6 He that saith he abideth in him ought himself also so to walk,
even as he walked.

2:7 Brethren, I write no new commandment unto you, but an old
commandment which ye had from the beginning. The old commandment is
the word which ye have heard from the beginning.

2:8 Again, a new commandment I write unto you, which thing is true in
him and in you: because the darkness is past, and the true light now
shineth.

2:9 He that saith he is in the light, and hateth his brother, is in
darkness even until now.

2:10 He that loveth his brother abideth in the light, and there is
none occasion of stumbling in him.

2:11 But he that hateth his brother is in darkness, and walketh in
darkness, and knoweth not whither he goeth, because that darkness hath
blinded his eyes.

2:12 I write unto you, little children, because your sins are forgiven
you for his name's sake.

2:13 I write unto you, fathers, because ye have known him that is from
the beginning. I write unto you, young men, because ye have overcome
the wicked one. I write unto you, little children, because ye have
known the Father.

2:14 I have written unto you, fathers, because ye have known him that
is from the beginning. I have written unto you, young men, because ye
are strong, and the word of God abideth in you, and ye have overcome
the wicked one.

2:15 Love not the world, neither the things that are in the world. If
any man love the world, the love of the Father is not in him.

2:16 For all that is in the world, the lust of the flesh, and the lust
of the eyes, and the pride of life, is not of the Father, but is of
the world.

2:17 And the world passeth away, and the lust thereof: but he that
doeth the will of God abideth for ever.

2:18 Little children, it is the last time: and as ye have heard that
antichrist shall come, even now are there many antichrists; whereby we
know that it is the last time.

2:19 They went out from us, but they were not of us; for if they had
been of us, they would no doubt have continued with us: but they went
out, that they might be made manifest that they were not all of us.

2:20 But ye have an unction from the Holy One, and ye know all things.

2:21 I have not written unto you because ye know not the truth, but
because ye know it, and that no lie is of the truth.

2:22 Who is a liar but he that denieth that Jesus is the Christ? He is
antichrist, that denieth the Father and the Son.

2:23 Whosoever denieth the Son, the same hath not the Father: he that
acknowledgeth the Son hath the Father also.

2:24 Let that therefore abide in you, which ye have heard from the
beginning. If that which ye have heard from the beginning shall remain
in you, ye also shall continue in the Son, and in the Father.

2:25 And this is the promise that he hath promised us, even eternal
life.

2:26 These things have I written unto you concerning them that seduce
you.

2:27 But the anointing which ye have received of him abideth in you,
and ye need not that any man teach you: but as the same anointing
teacheth you of all things, and is truth, and is no lie, and even as
it hath taught you, ye shall abide in him.

2:28 And now, little children, abide in him; that, when he shall
appear, we may have confidence, and not be ashamed before him at his
coming.

2:29 If ye know that he is righteous, ye know that every one that
doeth righteousness is born of him.

3:1 Behold, what manner of love the Father hath bestowed upon us, that
we should be called the sons of God: therefore the world knoweth us
not, because it knew him not.

3:2 Beloved, now are we the sons of God, and it doth not yet appear
what we shall be: but we know that, when he shall appear, we shall be
like him; for we shall see him as he is.

3:3 And every man that hath this hope in him purifieth himself, even
as he is pure.

3:4 Whosoever committeth sin transgresseth also the law: for sin is
the transgression of the law.

3:5 And ye know that he was manifested to take away our sins; and in
him is no sin.

3:6 Whosoever abideth in him sinneth not: whosoever sinneth hath not
seen him, neither known him.

3:7 Little children, let no man deceive you: he that doeth
righteousness is righteous, even as he is righteous.

3:8 He that committeth sin is of the devil; for the devil sinneth from
the beginning. For this purpose the Son of God was manifested, that he
might destroy the works of the devil.

3:9 Whosoever is born of God doth not commit sin; for his seed
remaineth in him: and he cannot sin, because he is born of God.

3:10 In this the children of God are manifest, and the children of the
devil: whosoever doeth not righteousness is not of God, neither he
that loveth not his brother.

3:11 For this is the message that ye heard from the beginning, that we
should love one another.

3:12 Not as Cain, who was of that wicked one, and slew his brother.
And wherefore slew he him? Because his own works were evil, and his
brother's righteous.

3:13 Marvel not, my brethren, if the world hate you.

3:14 We know that we have passed from death unto life, because we love
the brethren. He that loveth not his brother abideth in death.

3:15 Whosoever hateth his brother is a murderer: and ye know that no
murderer hath eternal life abiding in him.

3:16 Hereby perceive we the love of God, because he laid down his life
for us: and we ought to lay down our lives for the brethren.

3:17 But whoso hath this world's good, and seeth his brother have
need, and shutteth up his bowels of compassion from him, how dwelleth
the love of God in him?  3:18 My little children, let us not love in
word, neither in tongue; but in deed and in truth.

3:19 And hereby we know that we are of the truth, and shall assure our
hearts before him.

3:20 For if our heart condemn us, God is greater than our heart, and
knoweth all things.

3:21 Beloved, if our heart condemn us not, then have we confidence
toward God.

3:22 And whatsoever we ask, we receive of him, because we keep his
commandments, and do those things that are pleasing in his sight.

3:23 And this is his commandment, That we should believe on the name
of his Son Jesus Christ, and love one another, as he gave us
commandment.

3:24 And he that keepeth his commandments dwelleth in him, and he in
him.

And hereby we know that he abideth in us, by the Spirit which he hath
given us.

4:1 Beloved, believe not every spirit, but try the spirits whether
they are of God: because many false prophets are gone out into the
world.

4:2 Hereby know ye the Spirit of God: Every spirit that confesseth
that Jesus Christ is come in the flesh is of God: 4:3 And every spirit
that confesseth not that Jesus Christ is come in the flesh is not of
God: and this is that spirit of antichrist, whereof ye have heard that
it should come; and even now already is it in the world.

4:4 Ye are of God, little children, and have overcome them: because
greater is he that is in you, than he that is in the world.

4:5 They are of the world: therefore speak they of the world, and the
world heareth them.

4:6 We are of God: he that knoweth God heareth us; he that is not of
God heareth not us. Hereby know we the spirit of truth, and the spirit
of error.

4:7 Beloved, let us love one another: for love is of God; and every
one that loveth is born of God, and knoweth God.

4:8 He that loveth not knoweth not God; for God is love.

4:9 In this was manifested the love of God toward us, because that God
sent his only begotten Son into the world, that we might live through
him.

4:10 Herein is love, not that we loved God, but that he loved us, and
sent his Son to be the propitiation for our sins.

4:11 Beloved, if God so loved us, we ought also to love one another.

4:12 No man hath seen God at any time. If we love one another, God
dwelleth in us, and his love is perfected in us.

4:13 Hereby know we that we dwell in him, and he in us, because he
hath given us of his Spirit.

4:14 And we have seen and do testify that the Father sent the Son to
be the Saviour of the world.

4:15 Whosoever shall confess that Jesus is the Son of God, God
dwelleth in him, and he in God.

4:16 And we have known and believed the love that God hath to us. God
is love; and he that dwelleth in love dwelleth in God, and God in him.

4:17 Herein is our love made perfect, that we may have boldness in the
day of judgment: because as he is, so are we in this world.

4:18 There is no fear in love; but perfect love casteth out fear:
because fear hath torment. He that feareth is not made perfect in
love.

4:19 We love him, because he first loved us.

4:20 If a man say, I love God, and hateth his brother, he is a liar:
for he that loveth not his brother whom he hath seen, how can he love
God whom he hath not seen?  4:21 And this commandment have we from
him, That he who loveth God love his brother also.

5:1 Whosoever believeth that Jesus is the Christ is born of God: and
every one that loveth him that begat loveth him also that is begotten
of him.

5:2 By this we know that we love the children of God, when we love
God, and keep his commandments.

5:3 For this is the love of God, that we keep his commandments: and
his commandments are not grievous.

5:4 For whatsoever is born of God overcometh the world: and this is
the victory that overcometh the world, even our faith.

5:5 Who is he that overcometh the world, but he that believeth that
Jesus is the Son of God?  5:6 This is he that came by water and blood,
even Jesus Christ; not by water only, but by water and blood. And it
is the Spirit that beareth witness, because the Spirit is truth.

5:7 For there are three that bear record in heaven, the Father, the
Word, and the Holy Ghost: and these three are one.

5:8 And there are three that bear witness in earth, the Spirit, and
the water, and the blood: and these three agree in one.

5:9 If we receive the witness of men, the witness of God is greater:
for this is the witness of God which he hath testified of his Son.

5:10 He that believeth on the Son of God hath the witness in himself:
he that believeth not God hath made him a liar; because he believeth
not the record that God gave of his Son.

5:11 And this is the record, that God hath given to us eternal life,
and this life is in his Son.

5:12 He that hath the Son hath life; and he that hath not the Son of
God hath not life.

5:13 These things have I written unto you that believe on the name of
the Son of God; that ye may know that ye have eternal life, and that
ye may believe on the name of the Son of God.

5:14 And this is the confidence that we have in him, that, if we ask
any thing according to his will, he heareth us: 5:15 And if we know
that he hear us, whatsoever we ask, we know that we have the petitions
that we desired of him.

5:16 If any man see his brother sin a sin which is not unto death, he
shall ask, and he shall give him life for them that sin not unto
death. There is a sin unto death: I do not say that he shall pray for
it.

5:17 All unrighteousness is sin: and there is a sin not unto death.

5:18 We know that whosoever is born of God sinneth not; but he that is
begotten of God keepeth himself, and that wicked one toucheth him not.

5:19 And we know that we are of God, and the whole world lieth in
wickedness.

5:20 And we know that the Son of God is come, and hath given us an
understanding, that we may know him that is true, and we are in him
that is true, even in his Son Jesus Christ. This is the true God, and
eternal life.

5:21 Little children, keep yourselves from idols. Amen.




The Second Epistle General of John


1:1 The elder unto the elect lady and her children, whom I love in
the truth; and not I only, but also all they that have known the
truth; 1:2 For the truth's sake, which dwelleth in us, and shall be
with us for ever.

1:3 Grace be with you, mercy, and peace, from God the Father, and from
the Lord Jesus Christ, the Son of the Father, in truth and love.

1:4 I rejoiced greatly that I found of thy children walking in truth,
as we have received a commandment from the Father.

1:5 And now I beseech thee, lady, not as though I wrote a new
commandment unto thee, but that which we had from the beginning, that
we love one another.

1:6 And this is love, that we walk after his commandments. This is the
commandment, That, as ye have heard from the beginning, ye should walk
in it.

1:7 For many deceivers are entered into the world, who confess not
that Jesus Christ is come in the flesh. This is a deceiver and an
antichrist.

1:8 Look to yourselves, that we lose not those things which we have
wrought, but that we receive a full reward.

1:9 Whosoever transgresseth, and abideth not in the doctrine of
Christ, hath not God. He that abideth in the doctrine of Christ, he
hath both the Father and the Son.

1:10 If there come any unto you, and bring not this doctrine, receive
him not into your house, neither bid him God speed: 1:11 For he that
biddeth him God speed is partaker of his evil deeds.

1:12 Having many things to write unto you, I would not write with
paper and ink: but I trust to come unto you, and speak face to face,
that our joy may be full.

1:13 The children of thy elect sister greet thee. Amen.




The Third Epistle General of John


1:1 The elder unto the wellbeloved Gaius, whom I love in the truth.

1:2 Beloved, I wish above all things that thou mayest prosper and be
in health, even as thy soul prospereth.

1:3 For I rejoiced greatly, when the brethren came and testified of
the truth that is in thee, even as thou walkest in the truth.

1:4 I have no greater joy than to hear that my children walk in truth.

1:5 Beloved, thou doest faithfully whatsoever thou doest to the
brethren, and to strangers; 1:6 Which have borne witness of thy
charity before the church: whom if thou bring forward on their journey
after a godly sort, thou shalt do well: 1:7 Because that for his
name's sake they went forth, taking nothing of the Gentiles.

1:8 We therefore ought to receive such, that we might be fellowhelpers
to the truth.

1:9 I wrote unto the church: but Diotrephes, who loveth to have the
preeminence among them, receiveth us not.

1:10 Wherefore, if I come, I will remember his deeds which he doeth,
prating against us with malicious words: and not content therewith,
neither doth he himself receive the brethren, and forbiddeth them that
would, and casteth them out of the church.

1:11 Beloved, follow not that which is evil, but that which is good.
He that doeth good is of God: but he that doeth evil hath not seen
God.

1:12 Demetrius hath good report of all men, and of the truth itself:
yea, and we also bear record; and ye know that our record is true.

1:13 I had many things to write, but I will not with ink and pen write
unto thee: 1:14 But I trust I shall shortly see thee, and we shall
speak face to face. Peace be to thee. Our friends salute thee. Greet
the friends by name.




The General Epistle of Jude


1:1 Jude, the servant of Jesus Christ, and brother of James, to them
that are sanctified by God the Father, and preserved in Jesus Christ,
and called: 1:2 Mercy unto you, and peace, and love, be multiplied.

1:3 Beloved, when I gave all diligence to write unto you of the common
salvation, it was needful for me to write unto you, and exhort you
that ye should earnestly contend for the faith which was once
delivered unto the saints.

1:4 For there are certain men crept in unawares, who were before of
old ordained to this condemnation, ungodly men, turning the grace of
our God into lasciviousness, and denying the only Lord God, and our
Lord Jesus Christ.

1:5 I will therefore put you in remembrance, though ye once knew this,
how that the Lord, having saved the people out of the land of Egypt,
afterward destroyed them that believed not.

1:6 And the angels which kept not their first estate, but left their
own habitation, he hath reserved in everlasting chains under darkness
unto the judgment of the great day.

1:7 Even as Sodom and Gomorrha, and the cities about them in like
manner, giving themselves over to fornication, and going after strange
flesh, are set forth for an example, suffering the vengeance of
eternal fire.

1:8 Likewise also these filthy dreamers defile the flesh, despise
dominion, and speak evil of dignities.

1:9 Yet Michael the archangel, when contending with the devil he
disputed about the body of Moses, durst not bring against him a
railing accusation, but said, The Lord rebuke thee.

1:10 But these speak evil of those things which they know not: but
what they know naturally, as brute beasts, in those things they
corrupt themselves.

1:11 Woe unto them! for they have gone in the way of Cain, and ran
greedily after the error of Balaam for reward, and perished in the
gainsaying of Core.

1:12 These are spots in your feasts of charity, when they feast with
you, feeding themselves without fear: clouds they are without water,
carried about of winds; trees whose fruit withereth, without fruit,
twice dead, plucked up by the roots; 1:13 Raging waves of the sea,
foaming out their own shame; wandering stars, to whom is reserved the
blackness of darkness for ever.

1:14 And Enoch also, the seventh from Adam, prophesied of these,
saying, Behold, the Lord cometh with ten thousands of his saints, 1:15
To execute judgment upon all, and to convince all that are ungodly
among them of all their ungodly deeds which they have ungodly
committed, and of all their hard speeches which ungodly sinners have
spoken against him.

1:16 These are murmurers, complainers, walking after their own lusts;
and their mouth speaketh great swelling words, having men's persons in
admiration because of advantage.

1:17 But, beloved, remember ye the words which were spoken before of
the apostles of our Lord Jesus Christ; 1:18 How that they told you
there should be mockers in the last time, who should walk after their
own ungodly lusts.

1:19 These be they who separate themselves, sensual, having not the
Spirit.

1:20 But ye, beloved, building up yourselves on your most holy faith,
praying in the Holy Ghost, 1:21 Keep yourselves in the love of God,
looking for the mercy of our Lord Jesus Christ unto eternal life.

1:22 And of some have compassion, making a difference: 1:23 And others
save with fear, pulling them out of the fire; hating even the garment
spotted by the flesh.

1:24 Now unto him that is able to keep you from falling, and to
present you faultless before the presence of his glory with exceeding
joy, 1:25 To the only wise God our Saviour, be glory and majesty,
dominion and power, both now and ever. Amen.




The Revelation of Saint John the Devine


1:1 The Revelation of Jesus Christ, which God gave unto him, to shew
unto his servants things which must shortly come to pass; and he sent
and signified it by his angel unto his servant John: 1:2 Who bare
record of the word of God, and of the testimony of Jesus Christ, and
of all things that he saw.

1:3 Blessed is he that readeth, and they that hear the words of this
prophecy, and keep those things which are written therein: for the
time is at hand.

1:4 John to the seven churches which are in Asia: Grace be unto you,
and peace, from him which is, and which was, and which is to come; and
from the seven Spirits which are before his throne; 1:5 And from Jesus
Christ, who is the faithful witness, and the first begotten of the
dead, and the prince of the kings of the earth. Unto him that loved
us, and washed us from our sins in his own blood, 1:6 And hath made us
kings and priests unto God and his Father; to him be glory and
dominion for ever and ever. Amen.

1:7 Behold, he cometh with clouds; and every eye shall see him, and
they also which pierced him: and all kindreds of the earth shall wail
because of him. Even so, Amen.

1:8 I am Alpha and Omega, the beginning and the ending, saith the
Lord, which is, and which was, and which is to come, the Almighty.

1:9 I John, who also am your brother, and companion in tribulation,
and in the kingdom and patience of Jesus Christ, was in the isle that
is called Patmos, for the word of God, and for the testimony of Jesus
Christ.

1:10 I was in the Spirit on the Lord's day, and heard behind me a
great voice, as of a trumpet, 1:11 Saying, I am Alpha and Omega, the
first and the last: and, What thou seest, write in a book, and send it
unto the seven churches which are in Asia; unto Ephesus, and unto
Smyrna, and unto Pergamos, and unto Thyatira, and unto Sardis, and
unto Philadelphia, and unto Laodicea.

1:12 And I turned to see the voice that spake with me. And being
turned, I saw seven golden candlesticks; 1:13 And in the midst of the
seven candlesticks one like unto the Son of man, clothed with a
garment down to the foot, and girt about the paps with a golden
girdle.

1:14 His head and his hairs were white like wool, as white as snow;
and his eyes were as a flame of fire; 1:15 And his feet like unto fine
brass, as if they burned in a furnace; and his voice as the sound of
many waters.

1:16 And he had in his right hand seven stars: and out of his mouth
went a sharp twoedged sword: and his countenance was as the sun
shineth in his strength.

1:17 And when I saw him, I fell at his feet as dead. And he laid his
right hand upon me, saying unto me, Fear not; I am the first and the
last: 1:18 I am he that liveth, and was dead; and, behold, I am alive
for evermore, Amen; and have the keys of hell and of death.

1:19 Write the things which thou hast seen, and the things which are,
and the things which shall be hereafter; 1:20 The mystery of the seven
stars which thou sawest in my right hand, and the seven golden
candlesticks. The seven stars are the angels of the seven churches:
and the seven candlesticks which thou sawest are the seven churches.

2:1 Unto the angel of the church of Ephesus write; These things saith
he that holdeth the seven stars in his right hand, who walketh in the
midst of the seven golden candlesticks; 2:2 I know thy works, and thy
labour, and thy patience, and how thou canst not bear them which are
evil: and thou hast tried them which say they are apostles, and are
not, and hast found them liars: 2:3 And hast borne, and hast patience,
and for my name's sake hast laboured, and hast not fainted.

2:4 Nevertheless I have somewhat against thee, because thou hast left
thy first love.

2:5 Remember therefore from whence thou art fallen, and repent, and do
the first works; or else I will come unto thee quickly, and will
remove thy candlestick out of his place, except thou repent.

2:6 But this thou hast, that thou hatest the deeds of the
Nicolaitanes, which I also hate.

2:7 He that hath an ear, let him hear what the Spirit saith unto the
churches; To him that overcometh will I give to eat of the tree of
life, which is in the midst of the paradise of God.

2:8 And unto the angel of the church in Smyrna write; These things
saith the first and the last, which was dead, and is alive; 2:9 I know
thy works, and tribulation, and poverty, (but thou art rich) and I
know the blasphemy of them which say they are Jews, and are not, but
are the synagogue of Satan.

2:10 Fear none of those things which thou shalt suffer: behold, the
devil shall cast some of you into prison, that ye may be tried; and ye
shall have tribulation ten days: be thou faithful unto death, and I
will give thee a crown of life.

2:11 He that hath an ear, let him hear what the Spirit saith unto the
churches; He that overcometh shall not be hurt of the second death.

2:12 And to the angel of the church in Pergamos write; These things
saith he which hath the sharp sword with two edges; 2:13 I know thy
works, and where thou dwellest, even where Satan's seat is: and thou
holdest fast my name, and hast not denied my faith, even in those days
wherein Antipas was my faithful martyr, who was slain among you, where
Satan dwelleth.

2:14 But I have a few things against thee, because thou hast there
them that hold the doctrine of Balaam, who taught Balac to cast a
stumblingblock before the children of Israel, to eat things sacrificed
unto idols, and to commit fornication.

2:15 So hast thou also them that hold the doctrine of the
Nicolaitanes, which thing I hate.

2:16 Repent; or else I will come unto thee quickly, and will fight
against them with the sword of my mouth.

2:17 He that hath an ear, let him hear what the Spirit saith unto the
churches; To him that overcometh will I give to eat of the hidden
manna, and will give him a white stone, and in the stone a new name
written, which no man knoweth saving he that receiveth it.

2:18 And unto the angel of the church in Thyatira write; These things
saith the Son of God, who hath his eyes like unto a flame of fire, and
his feet are like fine brass; 2:19 I know thy works, and charity, and
service, and faith, and thy patience, and thy works; and the last to
be more than the first.

2:20 Notwithstanding I have a few things against thee, because thou
sufferest that woman Jezebel, which calleth herself a prophetess, to
teach and to seduce my servants to commit fornication, and to eat
things sacrificed unto idols.

2:21 And I gave her space to repent of her fornication; and she
repented not.

2:22 Behold, I will cast her into a bed, and them that commit adultery
with her into great tribulation, except they repent of their deeds.

2:23 And I will kill her children with death; and all the churches
shall know that I am he which searcheth the reins and hearts: and I
will give unto every one of you according to your works.

2:24 But unto you I say, and unto the rest in Thyatira, as many as
have not this doctrine, and which have not known the depths of Satan,
as they speak; I will put upon you none other burden.

2:25 But that which ye have already hold fast till I come.

2:26 And he that overcometh, and keepeth my works unto the end, to him
will I give power over the nations: 2:27 And he shall rule them with a
rod of iron; as the vessels of a potter shall they be broken to
shivers: even as I received of my Father.

2:28 And I will give him the morning star.

2:29 He that hath an ear, let him hear what the Spirit saith unto the
churches.

3:1 And unto the angel of the church in Sardis write; These things
saith he that hath the seven Spirits of God, and the seven stars; I
know thy works, that thou hast a name that thou livest, and art dead.

3:2 Be watchful, and strengthen the things which remain, that are
ready to die: for I have not found thy works perfect before God.

3:3 Remember therefore how thou hast received and heard, and hold
fast, and repent. If therefore thou shalt not watch, I will come on
thee as a thief, and thou shalt not know what hour I will come upon
thee.

3:4 Thou hast a few names even in Sardis which have not defiled their
garments; and they shall walk with me in white: for they are worthy.

3:5 He that overcometh, the same shall be clothed in white raiment;
and I will not blot out his name out of the book of life, but I will
confess his name before my Father, and before his angels.

3:6 He that hath an ear, let him hear what the Spirit saith unto the
churches.

3:7 And to the angel of the church in Philadelphia write; These things
saith he that is holy, he that is true, he that hath the key of David,
he that openeth, and no man shutteth; and shutteth, and no man
openeth; 3:8 I know thy works: behold, I have set before thee an open
door, and no man can shut it: for thou hast a little strength, and
hast kept my word, and hast not denied my name.

3:9 Behold, I will make them of the synagogue of Satan, which say they
are Jews, and are not, but do lie; behold, I will make them to come
and worship before thy feet, and to know that I have loved thee.

3:10 Because thou hast kept the word of my patience, I also will keep
thee from the hour of temptation, which shall come upon all the world,
to try them that dwell upon the earth.

3:11 Behold, I come quickly: hold that fast which thou hast, that no
man take thy crown.

3:12 Him that overcometh will I make a pillar in the temple of my God,
and he shall go no more out: and I will write upon him the name of my
God, and the name of the city of my God, which is new Jerusalem, which
cometh down out of heaven from my God: and I will write upon him my
new name.

3:13 He that hath an ear, let him hear what the Spirit saith unto the
churches.

3:14 And unto the angel of the church of the Laodiceans write; These
things saith the Amen, the faithful and true witness, the beginning of
the creation of God; 3:15 I know thy works, that thou art neither cold
nor hot: I would thou wert cold or hot.

3:16 So then because thou art lukewarm, and neither cold nor hot, I
will spue thee out of my mouth.

3:17 Because thou sayest, I am rich, and increased with goods, and
have need of nothing; and knowest not that thou art wretched, and
miserable, and poor, and blind, and naked: 3:18 I counsel thee to buy
of me gold tried in the fire, that thou mayest be rich; and white
raiment, that thou mayest be clothed, and that the shame of thy
nakedness do not appear; and anoint thine eyes with eyesalve, that
thou mayest see.

3:19 As many as I love, I rebuke and chasten: be zealous therefore,
and repent.

3:20 Behold, I stand at the door, and knock: if any man hear my voice,
and open the door, I will come in to him, and will sup with him, and
he with me.

3:21 To him that overcometh will I grant to sit with me in my throne,
even as I also overcame, and am set down with my Father in his throne.

3:22 He that hath an ear, let him hear what the Spirit saith unto the
churches.

4:1 After this I looked, and, behold, a door was opened in heaven: and
the first voice which I heard was as it were of a trumpet talking with
me; which said, Come up hither, and I will shew thee things which must
be hereafter.

4:2 And immediately I was in the spirit: and, behold, a throne was set
in heaven, and one sat on the throne.

4:3 And he that sat was to look upon like a jasper and a sardine
stone: and there was a rainbow round about the throne, in sight like
unto an emerald.

4:4 And round about the throne were four and twenty seats: and upon
the seats I saw four and twenty elders sitting, clothed in white
raiment; and they had on their heads crowns of gold.

4:5 And out of the throne proceeded lightnings and thunderings and
voices: and there were seven lamps of fire burning before the throne,
which are the seven Spirits of God.

4:6 And before the throne there was a sea of glass like unto crystal:
and in the midst of the throne, and round about the throne, were four
beasts full of eyes before and behind.

4:7 And the first beast was like a lion, and the second beast like a
calf, and the third beast had a face as a man, and the fourth beast
was like a flying eagle.

4:8 And the four beasts had each of them six wings about him; and they
were full of eyes within: and they rest not day and night, saying,
Holy, holy, holy, LORD God Almighty, which was, and is, and is to
come.

4:9 And when those beasts give glory and honour and thanks to him that
sat on the throne, who liveth for ever and ever, 4:10 The four and
twenty elders fall down before him that sat on the throne, and worship
him that liveth for ever and ever, and cast their crowns before the
throne, saying, 4:11 Thou art worthy, O Lord, to receive glory and
honour and power: for thou hast created all things, and for thy
pleasure they are and were created.

5:1 And I saw in the right hand of him that sat on the throne a book
written within and on the backside, sealed with seven seals.

5:2 And I saw a strong angel proclaiming with a loud voice, Who is
worthy to open the book, and to loose the seals thereof?  5:3 And no
man in heaven, nor in earth, neither under the earth, was able to open
the book, neither to look thereon.

5:4 And I wept much, because no man was found worthy to open and to
read the book, neither to look thereon.

5:5 And one of the elders saith unto me, Weep not: behold, the Lion of
the tribe of Juda, the Root of David, hath prevailed to open the book,
and to loose the seven seals thereof.

5:6 And I beheld, and, lo, in the midst of the throne and of the four
beasts, and in the midst of the elders, stood a Lamb as it had been
slain, having seven horns and seven eyes, which are the seven Spirits
of God sent forth into all the earth.

5:7 And he came and took the book out of the right hand of him that
sat upon the throne.

5:8 And when he had taken the book, the four beasts and four and
twenty elders fell down before the Lamb, having every one of them
harps, and golden vials full of odours, which are the prayers of
saints.

5:9 And they sung a new song, saying, Thou art worthy to take the
book, and to open the seals thereof: for thou wast slain, and hast
redeemed us to God by thy blood out of every kindred, and tongue, and
people, and nation; 5:10 And hast made us unto our God kings and
priests: and we shall reign on the earth.

5:11 And I beheld, and I heard the voice of many angels round about
the throne and the beasts and the elders: and the number of them was
ten thousand times ten thousand, and thousands of thousands; 5:12
Saying with a loud voice, Worthy is the Lamb that was slain to receive
power, and riches, and wisdom, and strength, and honour, and glory,
and blessing.

5:13 And every creature which is in heaven, and on the earth, and
under the earth, and such as are in the sea, and all that are in them,
heard I saying, Blessing, and honour, and glory, and power, be unto
him that sitteth upon the throne, and unto the Lamb for ever and ever.

5:14 And the four beasts said, Amen. And the four and twenty elders
fell down and worshipped him that liveth for ever and ever.

6:1 And I saw when the Lamb opened one of the seals, and I heard, as
it were the noise of thunder, one of the four beasts saying, Come and
see.

6:2 And I saw, and behold a white horse: and he that sat on him had a
bow; and a crown was given unto him: and he went forth conquering, and
to conquer.

6:3 And when he had opened the second seal, I heard the second beast
say, Come and see.

6:4 And there went out another horse that was red: and power was given
to him that sat thereon to take peace from the earth, and that they
should kill one another: and there was given unto him a great sword.

6:5 And when he had opened the third seal, I heard the third beast
say, Come and see. And I beheld, and lo a black horse; and he that sat
on him had a pair of balances in his hand.

6:6 And I heard a voice in the midst of the four beasts say, A measure
of wheat for a penny, and three measures of barley for a penny; and
see thou hurt not the oil and the wine.

6:7 And when he had opened the fourth seal, I heard the voice of the
fourth beast say, Come and see.

6:8 And I looked, and behold a pale horse: and his name that sat on
him was Death, and Hell followed with him. And power was given unto
them over the fourth part of the earth, to kill with sword, and with
hunger, and with death, and with the beasts of the earth.

6:9 And when he had opened the fifth seal, I saw under the altar the
souls of them that were slain for the word of God, and for the
testimony which they held: 6:10 And they cried with a loud voice,
saying, How long, O Lord, holy and true, dost thou not judge and
avenge our blood on them that dwell on the earth?  6:11 And white
robes were given unto every one of them; and it was said unto them,
that they should rest yet for a little season, until their
fellowservants also and their brethren, that should be killed as they
were, should be fulfilled.

6:12 And I beheld when he had opened the sixth seal, and, lo, there
was a great earthquake; and the sun became black as sackcloth of hair,
and the moon became as blood; 6:13 And the stars of heaven fell unto
the earth, even as a fig tree casteth her untimely figs, when she is
shaken of a mighty wind.

6:14 And the heaven departed as a scroll when it is rolled together;
and every mountain and island were moved out of their places.

6:15 And the kings of the earth, and the great men, and the rich men,
and the chief captains, and the mighty men, and every bondman, and
every free man, hid themselves in the dens and in the rocks of the
mountains; 6:16 And said to the mountains and rocks, Fall on us, and
hide us from the face of him that sitteth on the throne, and from the
wrath of the Lamb: 6:17 For the great day of his wrath is come; and
who shall be able to stand?  7:1 And after these things I saw four
angels standing on the four corners of the earth, holding the four
winds of the earth, that the wind should not blow on the earth, nor on
the sea, nor on any tree.

7:2 And I saw another angel ascending from the east, having the seal
of the living God: and he cried with a loud voice to the four angels,
to whom it was given to hurt the earth and the sea, 7:3 Saying, Hurt
not the earth, neither the sea, nor the trees, till we have sealed the
servants of our God in their foreheads.

7:4 And I heard the number of them which were sealed: and there were
sealed an hundred and forty and four thousand of all the tribes of the
children of Israel.

7:5 Of the tribe of Juda were sealed twelve thousand. Of the tribe of
Reuben were sealed twelve thousand. Of the tribe of Gad were sealed
twelve thousand.

7:6 Of the tribe of Aser were sealed twelve thousand. Of the tribe of
Nephthalim were sealed twelve thousand. Of the tribe of Manasses were
sealed twelve thousand.

7:7 Of the tribe of Simeon were sealed twelve thousand. Of the tribe
of Levi were sealed twelve thousand. Of the tribe of Issachar were
sealed twelve thousand.

7:8 Of the tribe of Zabulon were sealed twelve thousand. Of the tribe
of Joseph were sealed twelve thousand. Of the tribe of Benjamin were
sealed twelve thousand.

7:9 After this I beheld, and, lo, a great multitude, which no man
could number, of all nations, and kindreds, and people, and tongues,
stood before the throne, and before the Lamb, clothed with white
robes, and palms in their hands; 7:10 And cried with a loud voice,
saying, Salvation to our God which sitteth upon the throne, and unto
the Lamb.

7:11 And all the angels stood round about the throne, and about the
elders and the four beasts, and fell before the throne on their faces,
and worshipped God, 7:12 Saying, Amen: Blessing, and glory, and
wisdom, and thanksgiving, and honour, and power, and might, be unto
our God for ever and ever. Amen.

7:13 And one of the elders answered, saying unto me, What are these
which are arrayed in white robes? and whence came they?  7:14 And I
said unto him, Sir, thou knowest. And he said to me, These are they
which came out of great tribulation, and have washed their robes, and
made them white in the blood of the Lamb.

7:15 Therefore are they before the throne of God, and serve him day
and night in his temple: and he that sitteth on the throne shall dwell
among them.

7:16 They shall hunger no more, neither thirst any more; neither shall
the sun light on them, nor any heat.

7:17 For the Lamb which is in the midst of the throne shall feed them,
and shall lead them unto living fountains of waters: and God shall
wipe away all tears from their eyes.

8:1 And when he had opened the seventh seal, there was silence in
heaven about the space of half an hour.

8:2 And I saw the seven angels which stood before God; and to them
were given seven trumpets.

8:3 And another angel came and stood at the altar, having a golden
censer; and there was given unto him much incense, that he should
offer it with the prayers of all saints upon the golden altar which
was before the throne.

8:4 And the smoke of the incense, which came with the prayers of the
saints, ascended up before God out of the angel's hand.

8:5 And the angel took the censer, and filled it with fire of the
altar, and cast it into the earth: and there were voices, and
thunderings, and lightnings, and an earthquake.

8:6 And the seven angels which had the seven trumpets prepared
themselves to sound.

8:7 The first angel sounded, and there followed hail and fire mingled
with blood, and they were cast upon the earth: and the third part of
trees was burnt up, and all green grass was burnt up.

8:8 And the second angel sounded, and as it were a great mountain
burning with fire was cast into the sea: and the third part of the sea
became blood; 8:9 And the third part of the creatures which were in
the sea, and had life, died; and the third part of the ships were
destroyed.

8:10 And the third angel sounded, and there fell a great star from
heaven, burning as it were a lamp, and it fell upon the third part of
the rivers, and upon the fountains of waters; 8:11 And the name of the
star is called Wormwood: and the third part of the waters became
wormwood; and many men died of the waters, because they were made
bitter.

8:12 And the fourth angel sounded, and the third part of the sun was
smitten, and the third part of the moon, and the third part of the
stars; so as the third part of them was darkened, and the day shone
not for a third part of it, and the night likewise.

8:13 And I beheld, and heard an angel flying through the midst of
heaven, saying with a loud voice, Woe, woe, woe, to the inhabiters of
the earth by reason of the other voices of the trumpet of the three
angels, which are yet to sound!  9:1 And the fifth angel sounded, and
I saw a star fall from heaven unto the earth: and to him was given the
key of the bottomless pit.

9:2 And he opened the bottomless pit; and there arose a smoke out of
the pit, as the smoke of a great furnace; and the sun and the air were
darkened by reason of the smoke of the pit.

9:3 And there came out of the smoke locusts upon the earth: and unto
them was given power, as the scorpions of the earth have power.

9:4 And it was commanded them that they should not hurt the grass of
the earth, neither any green thing, neither any tree; but only those
men which have not the seal of God in their foreheads.

9:5 And to them it was given that they should not kill them, but that
they should be tormented five months: and their torment was as the
torment of a scorpion, when he striketh a man.

9:6 And in those days shall men seek death, and shall not find it; and
shall desire to die, and death shall flee from them.

9:7 And the shapes of the locusts were like unto horses prepared unto
battle; and on their heads were as it were crowns like gold, and their
faces were as the faces of men.

9:8 And they had hair as the hair of women, and their teeth were as
the teeth of lions.

9:9 And they had breastplates, as it were breastplates of iron; and
the sound of their wings was as the sound of chariots of many horses
running to battle.

9:10 And they had tails like unto scorpions, and there were stings in
their tails: and their power was to hurt men five months.

9:11 And they had a king over them, which is the angel of the
bottomless pit, whose name in the Hebrew tongue is Abaddon, but in the
Greek tongue hath his name Apollyon.

9:12 One woe is past; and, behold, there come two woes more hereafter.

9:13 And the sixth angel sounded, and I heard a voice from the four
horns of the golden altar which is before God, 9:14 Saying to the
sixth angel which had the trumpet, Loose the four angels which are
bound in the great river Euphrates.

9:15 And the four angels were loosed, which were prepared for an hour,
and a day, and a month, and a year, for to slay the third part of men.

9:16 And the number of the army of the horsemen were two hundred
thousand thousand: and I heard the number of them.

9:17 And thus I saw the horses in the vision, and them that sat on
them, having breastplates of fire, and of jacinth, and brimstone: and
the heads of the horses were as the heads of lions; and out of their
mouths issued fire and smoke and brimstone.

9:18 By these three was the third part of men killed, by the fire, and
by the smoke, and by the brimstone, which issued out of their mouths.

9:19 For their power is in their mouth, and in their tails: for their
tails were like unto serpents, and had heads, and with them they do
hurt.

9:20 And the rest of the men which were not killed by these plagues
yet repented not of the works of their hands, that they should not
worship devils, and idols of gold, and silver, and brass, and stone,
and of wood: which neither can see, nor hear, nor walk: 9:21 Neither
repented they of their murders, nor of their sorceries, nor of their
fornication, nor of their thefts.

10:1 And I saw another mighty angel come down from heaven, clothed
with a cloud: and a rainbow was upon his head, and his face was as it
were the sun, and his feet as pillars of fire: 10:2 And he had in his
hand a little book open: and he set his right foot upon the sea, and
his left foot on the earth, 10:3 And cried with a loud voice, as when
a lion roareth: and when he had cried, seven thunders uttered their
voices.

10:4 And when the seven thunders had uttered their voices, I was about
to write: and I heard a voice from heaven saying unto me, Seal up
those things which the seven thunders uttered, and write them not.

10:5 And the angel which I saw stand upon the sea and upon the earth
lifted up his hand to heaven, 10:6 And sware by him that liveth for
ever and ever, who created heaven, and the things that therein are,
and the earth, and the things that therein are, and the sea, and the
things which are therein, that there should be time no longer: 10:7
But in the days of the voice of the seventh angel, when he shall begin
to sound, the mystery of God should be finished, as he hath declared
to his servants the prophets.

10:8 And the voice which I heard from heaven spake unto me again, and
said, Go and take the little book which is open in the hand of the
angel which standeth upon the sea and upon the earth.

10:9 And I went unto the angel, and said unto him, Give me the little
book. And he said unto me, Take it, and eat it up; and it shall make
thy belly bitter, but it shall be in thy mouth sweet as honey.

10:10 And I took the little book out of the angel's hand, and ate it
up; and it was in my mouth sweet as honey: and as soon as I had eaten
it, my belly was bitter.

10:11 And he said unto me, Thou must prophesy again before many
peoples, and nations, and tongues, and kings.

11:1 And there was given me a reed like unto a rod: and the angel
stood, saying, Rise, and measure the temple of God, and the altar, and
them that worship therein.

11:2 But the court which is without the temple leave out, and measure
it not; for it is given unto the Gentiles: and the holy city shall
they tread under foot forty and two months.

11:3 And I will give power unto my two witnesses, and they shall
prophesy a thousand two hundred and threescore days, clothed in
sackcloth.

11:4 These are the two olive trees, and the two candlesticks standing
before the God of the earth.

11:5 And if any man will hurt them, fire proceedeth out of their
mouth, and devoureth their enemies: and if any man will hurt them, he
must in this manner be killed.

11:6 These have power to shut heaven, that it rain not in the days of
their prophecy: and have power over waters to turn them to blood, and
to smite the earth with all plagues, as often as they will.

11:7 And when they shall have finished their testimony, the beast that
ascendeth out of the bottomless pit shall make war against them, and
shall overcome them, and kill them.

11:8 And their dead bodies shall lie in the street of the great city,
which spiritually is called Sodom and Egypt, where also our Lord was
crucified.

11:9 And they of the people and kindreds and tongues and nations shall
see their dead bodies three days and an half, and shall not suffer
their dead bodies to be put in graves.

11:10 And they that dwell upon the earth shall rejoice over them, and
make merry, and shall send gifts one to another; because these two
prophets tormented them that dwelt on the earth.

11:11 And after three days and an half the spirit of life from God
entered into them, and they stood upon their feet; and great fear fell
upon them which saw them.

11:12 And they heard a great voice from heaven saying unto them, Come
up hither. And they ascended up to heaven in a cloud; and their
enemies beheld them.

11:13 And the same hour was there a great earthquake, and the tenth
part of the city fell, and in the earthquake were slain of men seven
thousand: and the remnant were affrighted, and gave glory to the God
of heaven.

11:14 The second woe is past; and, behold, the third woe cometh
quickly.

11:15 And the seventh angel sounded; and there were great voices in
heaven, saying, The kingdoms of this world are become the kingdoms of
our Lord, and of his Christ; and he shall reign for ever and ever.

11:16 And the four and twenty elders, which sat before God on their
seats, fell upon their faces, and worshipped God, 11:17 Saying, We
give thee thanks, O LORD God Almighty, which art, and wast, and art to
come; because thou hast taken to thee thy great power, and hast
reigned.

11:18 And the nations were angry, and thy wrath is come, and the time
of the dead, that they should be judged, and that thou shouldest give
reward unto thy servants the prophets, and to the saints, and them
that fear thy name, small and great; and shouldest destroy them which
destroy the earth.

11:19 And the temple of God was opened in heaven, and there was seen
in his temple the ark of his testament: and there were lightnings, and
voices, and thunderings, and an earthquake, and great hail.

12:1 And there appeared a great wonder in heaven; a woman clothed with
the sun, and the moon under her feet, and upon her head a crown of
twelve stars: 12:2 And she being with child cried, travailing in
birth, and pained to be delivered.

12:3 And there appeared another wonder in heaven; and behold a great
red dragon, having seven heads and ten horns, and seven crowns upon
his heads.

12:4 And his tail drew the third part of the stars of heaven, and did
cast them to the earth: and the dragon stood before the woman which
was ready to be delivered, for to devour her child as soon as it was
born.

12:5 And she brought forth a man child, who was to rule all nations
with a rod of iron: and her child was caught up unto God, and to his
throne.

12:6 And the woman fled into the wilderness, where she hath a place
prepared of God, that they should feed her there a thousand two
hundred and threescore days.

12:7 And there was war in heaven: Michael and his angels fought
against the dragon; and the dragon fought and his angels, 12:8 And
prevailed not; neither was their place found any more in heaven.

12:9 And the great dragon was cast out, that old serpent, called the
Devil, and Satan, which deceiveth the whole world: he was cast out
into the earth, and his angels were cast out with him.

12:10 And I heard a loud voice saying in heaven, Now is come
salvation, and strength, and the kingdom of our God, and the power of
his Christ: for the accuser of our brethren is cast down, which
accused them before our God day and night.

12:11 And they overcame him by the blood of the Lamb, and by the word
of their testimony; and they loved not their lives unto the death.

12:12 Therefore rejoice, ye heavens, and ye that dwell in them. Woe to
the inhabiters of the earth and of the sea! for the devil is come down
unto you, having great wrath, because he knoweth that he hath but a
short time.

12:13 And when the dragon saw that he was cast unto the earth, he
persecuted the woman which brought forth the man child.

12:14 And to the woman were given two wings of a great eagle, that she
might fly into the wilderness, into her place, where she is nourished
for a time, and times, and half a time, from the face of the serpent.

12:15 And the serpent cast out of his mouth water as a flood after the
woman, that he might cause her to be carried away of the flood.

12:16 And the earth helped the woman, and the earth opened her mouth,
and swallowed up the flood which the dragon cast out of his mouth.

12:17 And the dragon was wroth with the woman, and went to make war
with the remnant of her seed, which keep the commandments of God, and
have the testimony of Jesus Christ.

13:1 And I stood upon the sand of the sea, and saw a beast rise up out
of the sea, having seven heads and ten horns, and upon his horns ten
crowns, and upon his heads the name of blasphemy.

13:2 And the beast which I saw was like unto a leopard, and his feet
were as the feet of a bear, and his mouth as the mouth of a lion: and
the dragon gave him his power, and his seat, and great authority.

13:3 And I saw one of his heads as it were wounded to death; and his
deadly wound was healed: and all the world wondered after the beast.

13:4 And they worshipped the dragon which gave power unto the beast:
and they worshipped the beast, saying, Who is like unto the beast? who
is able to make war with him?  13:5 And there was given unto him a
mouth speaking great things and blasphemies; and power was given unto
him to continue forty and two months.

13:6 And he opened his mouth in blasphemy against God, to blaspheme
his name, and his tabernacle, and them that dwell in heaven.

13:7 And it was given unto him to make war with the saints, and to
overcome them: and power was given him over all kindreds, and tongues,
and nations.

13:8 And all that dwell upon the earth shall worship him, whose names
are not written in the book of life of the Lamb slain from the
foundation of the world.

13:9 If any man have an ear, let him hear.

13:10 He that leadeth into captivity shall go into captivity: he that
killeth with the sword must be killed with the sword. Here is the
patience and the faith of the saints.

13:11 And I beheld another beast coming up out of the earth; and he
had two horns like a lamb, and he spake as a dragon.

13:12 And he exerciseth all the power of the first beast before him,
and causeth the earth and them which dwell therein to worship the
first beast, whose deadly wound was healed.

13:13 And he doeth great wonders, so that he maketh fire come down
from heaven on the earth in the sight of men, 13:14 And deceiveth them
that dwell on the earth by the means of those miracles which he had
power to do in the sight of the beast; saying to them that dwell on
the earth, that they should make an image to the beast, which had the
wound by a sword, and did live.

13:15 And he had power to give life unto the image of the beast, that
the image of the beast should both speak, and cause that as many as
would not worship the image of the beast should be killed.

13:16 And he causeth all, both small and great, rich and poor, free
and bond, to receive a mark in their right hand, or in their
foreheads: 13:17 And that no man might buy or sell, save he that had
the mark, or the name of the beast, or the number of his name.

13:18 Here is wisdom. Let him that hath understanding count the number
of the beast: for it is the number of a man; and his number is Six
hundred threescore and six.

14:1 And I looked, and, lo, a Lamb stood on the mount Sion, and with
him an hundred forty and four thousand, having his Father's name
written in their foreheads.

14:2 And I heard a voice from heaven, as the voice of many waters, and
as the voice of a great thunder: and I heard the voice of harpers
harping with their harps: 14:3 And they sung as it were a new song
before the throne, and before the four beasts, and the elders: and no
man could learn that song but the hundred and forty and four thousand,
which were redeemed from the earth.

14:4 These are they which were not defiled with women; for they are
virgins. These are they which follow the Lamb whithersoever he goeth.
These were redeemed from among men, being the firstfruits unto God and
to the Lamb.

14:5 And in their mouth was found no guile: for they are without fault
before the throne of God.

14:6 And I saw another angel fly in the midst of heaven, having the
everlasting gospel to preach unto them that dwell on the earth, and to
every nation, and kindred, and tongue, and people, 14:7 Saying with a
loud voice, Fear God, and give glory to him; for the hour of his
judgment is come: and worship him that made heaven, and earth, and the
sea, and the fountains of waters.

14:8 And there followed another angel, saying, Babylon is fallen, is
fallen, that great city, because she made all nations drink of the
wine of the wrath of her fornication.

14:9 And the third angel followed them, saying with a loud voice, If
any man worship the beast and his image, and receive his mark in his
forehead, or in his hand, 14:10 The same shall drink of the wine of
the wrath of God, which is poured out without mixture into the cup of
his indignation; and he shall be tormented with fire and brimstone in
the presence of the holy angels, and in the presence of the Lamb:
14:11 And the smoke of their torment ascendeth up for ever and ever:
and they have no rest day nor night, who worship the beast and his
image, and whosoever receiveth the mark of his name.

14:12 Here is the patience of the saints: here are they that keep the
commandments of God, and the faith of Jesus.

14:13 And I heard a voice from heaven saying unto me, Write, Blessed
are the dead which die in the Lord from henceforth: Yea, saith the
Spirit, that they may rest from their labours; and their works do
follow them.

14:14 And I looked, and behold a white cloud, and upon the cloud one
sat like unto the Son of man, having on his head a golden crown, and
in his hand a sharp sickle.

14:15 And another angel came out of the temple, crying with a loud
voice to him that sat on the cloud, Thrust in thy sickle, and reap:
for the time is come for thee to reap; for the harvest of the earth is
ripe.

14:16 And he that sat on the cloud thrust in his sickle on the earth;
and the earth was reaped.

14:17 And another angel came out of the temple which is in heaven, he
also having a sharp sickle.

14:18 And another angel came out from the altar, which had power over
fire; and cried with a loud cry to him that had the sharp sickle,
saying, Thrust in thy sharp sickle, and gather the clusters of the
vine of the earth; for her grapes are fully ripe.

14:19 And the angel thrust in his sickle into the earth, and gathered
the vine of the earth, and cast it into the great winepress of the
wrath of God.

14:20 And the winepress was trodden without the city, and blood came
out of the winepress, even unto the horse bridles, by the space of a
thousand and six hundred furlongs.

15:1 And I saw another sign in heaven, great and marvellous, seven
angels having the seven last plagues; for in them is filled up the
wrath of God.

15:2 And I saw as it were a sea of glass mingled with fire: and them
that had gotten the victory over the beast, and over his image, and
over his mark, and over the number of his name, stand on the sea of
glass, having the harps of God.

15:3 And they sing the song of Moses the servant of God, and the song
of the Lamb, saying, Great and marvellous are thy works, Lord God
Almighty; just and true are thy ways, thou King of saints.

15:4 Who shall not fear thee, O Lord, and glorify thy name? for thou
only art holy: for all nations shall come and worship before thee; for
thy judgments are made manifest.

15:5 And after that I looked, and, behold, the temple of the
tabernacle of the testimony in heaven was opened: 15:6 And the seven
angels came out of the temple, having the seven plagues, clothed in
pure and white linen, and having their breasts girded with golden
girdles.

15:7 And one of the four beasts gave unto the seven angels seven
golden vials full of the wrath of God, who liveth for ever and ever.

15:8 And the temple was filled with smoke from the glory of God, and
from his power; and no man was able to enter into the temple, till the
seven plagues of the seven angels were fulfilled.

16:1 And I heard a great voice out of the temple saying to the seven
angels, Go your ways, and pour out the vials of the wrath of God upon
the earth.

16:2 And the first went, and poured out his vial upon the earth; and
there fell a noisome and grievous sore upon the men which had the mark
of the beast, and upon them which worshipped his image.

16:3 And the second angel poured out his vial upon the sea; and it
became as the blood of a dead man: and every living soul died in the
sea.

16:4 And the third angel poured out his vial upon the rivers and
fountains of waters; and they became blood.

16:5 And I heard the angel of the waters say, Thou art righteous, O
Lord, which art, and wast, and shalt be, because thou hast judged
thus.

16:6 For they have shed the blood of saints and prophets, and thou
hast given them blood to drink; for they are worthy.

16:7 And I heard another out of the altar say, Even so, Lord God
Almighty, true and righteous are thy judgments.

16:8 And the fourth angel poured out his vial upon the sun; and power
was given unto him to scorch men with fire.

16:9 And men were scorched with great heat, and blasphemed the name of
God, which hath power over these plagues: and they repented not to
give him glory.

16:10 And the fifth angel poured out his vial upon the seat of the
beast; and his kingdom was full of darkness; and they gnawed their
tongues for pain, 16:11 And blasphemed the God of heaven because of
their pains and their sores, and repented not of their deeds.

16:12 And the sixth angel poured out his vial upon the great river
Euphrates; and the water thereof was dried up, that the way of the
kings of the east might be prepared.

16:13 And I saw three unclean spirits like frogs come out of the mouth
of the dragon, and out of the mouth of the beast, and out of the mouth
of the false prophet.

16:14 For they are the spirits of devils, working miracles, which go
forth unto the kings of the earth and of the whole world, to gather
them to the battle of that great day of God Almighty.

16:15 Behold, I come as a thief. Blessed is he that watcheth, and
keepeth his garments, lest he walk naked, and they see his shame.

16:16 And he gathered them together into a place called in the Hebrew
tongue Armageddon.

16:17 And the seventh angel poured out his vial into the air; and
there came a great voice out of the temple of heaven, from the throne,
saying, It is done.

16:18 And there were voices, and thunders, and lightnings; and there
was a great earthquake, such as was not since men were upon the earth,
so mighty an earthquake, and so great.

16:19 And the great city was divided into three parts, and the cities
of the nations fell: and great Babylon came in remembrance before God,
to give unto her the cup of the wine of the fierceness of his wrath.

16:20 And every island fled away, and the mountains were not found.

16:21 And there fell upon men a great hail out of heaven, every stone
about the weight of a talent: and men blasphemed God because of the
plague of the hail; for the plague thereof was exceeding great.

17:1 And there came one of the seven angels which had the seven vials,
and talked with me, saying unto me, Come hither; I will shew unto thee
the judgment of the great whore that sitteth upon many waters: 17:2
With whom the kings of the earth have committed fornication, and the
inhabitants of the earth have been made drunk with the wine of her
fornication.

17:3 So he carried me away in the spirit into the wilderness: and I
saw a woman sit upon a scarlet coloured beast, full of names of
blasphemy, having seven heads and ten horns.

17:4 And the woman was arrayed in purple and scarlet colour, and
decked with gold and precious stones and pearls, having a golden cup
in her hand full of abominations and filthiness of her fornication:
17:5 And upon her forehead was a name written, MYSTERY, BABYLON THE
GREAT, THE MOTHER OF HARLOTS AND ABOMINATIONS OF THE EARTH.

17:6 And I saw the woman drunken with the blood of the saints, and
with the blood of the martyrs of Jesus: and when I saw her, I wondered
with great admiration.

17:7 And the angel said unto me, Wherefore didst thou marvel? I will
tell thee the mystery of the woman, and of the beast that carrieth
her, which hath the seven heads and ten horns.

17:8 The beast that thou sawest was, and is not; and shall ascend out
of the bottomless pit, and go into perdition: and they that dwell on
the earth shall wonder, whose names were not written in the book of
life from the foundation of the world, when they behold the beast that
was, and is not, and yet is.

17:9 And here is the mind which hath wisdom. The seven heads are seven
mountains, on which the woman sitteth.

17:10 And there are seven kings: five are fallen, and one is, and the
other is not yet come; and when he cometh, he must continue a short
space.

17:11 And the beast that was, and is not, even he is the eighth, and
is of the seven, and goeth into perdition.

17:12 And the ten horns which thou sawest are ten kings, which have
received no kingdom as yet; but receive power as kings one hour with
the beast.

17:13 These have one mind, and shall give their power and strength
unto the beast.

17:14 These shall make war with the Lamb, and the Lamb shall overcome
them: for he is Lord of lords, and King of kings: and they that are
with him are called, and chosen, and faithful.

17:15 And he saith unto me, The waters which thou sawest, where the
whore sitteth, are peoples, and multitudes, and nations, and tongues.

17:16 And the ten horns which thou sawest upon the beast, these shall
hate the whore, and shall make her desolate and naked, and shall eat
her flesh, and burn her with fire.

17:17 For God hath put in their hearts to fulfil his will, and to
agree, and give their kingdom unto the beast, until the words of God
shall be fulfilled.

17:18 And the woman which thou sawest is that great city, which
reigneth over the kings of the earth.

18:1 And after these things I saw another angel come down from heaven,
having great power; and the earth was lightened with his glory.

18:2 And he cried mightily with a strong voice, saying, Babylon the
great is fallen, is fallen, and is become the habitation of devils,
and the hold of every foul spirit, and a cage of every unclean and
hateful bird.

18:3 For all nations have drunk of the wine of the wrath of her
fornication, and the kings of the earth have committed fornication
with her, and the merchants of the earth are waxed rich through the
abundance of her delicacies.

18:4 And I heard another voice from heaven, saying, Come out of her,
my people, that ye be not partakers of her sins, and that ye receive
not of her plagues.

18:5 For her sins have reached unto heaven, and God hath remembered
her iniquities.

18:6 Reward her even as she rewarded you, and double unto her double
according to her works: in the cup which she hath filled fill to her
double.

18:7 How much she hath glorified herself, and lived deliciously, so
much torment and sorrow give her: for she saith in her heart, I sit a
queen, and am no widow, and shall see no sorrow.

18:8 Therefore shall her plagues come in one day, death, and mourning,
and famine; and she shall be utterly burned with fire: for strong is
the Lord God who judgeth her.

18:9 And the kings of the earth, who have committed fornication and
lived deliciously with her, shall bewail her, and lament for her, when
they shall see the smoke of her burning, 18:10 Standing afar off for
the fear of her torment, saying, Alas, alas that great city Babylon,
that mighty city! for in one hour is thy judgment come.

18:11 And the merchants of the earth shall weep and mourn over her;
for no man buyeth their merchandise any more: 18:12 The merchandise of
gold, and silver, and precious stones, and of pearls, and fine linen,
and purple, and silk, and scarlet, and all thyine wood, and all manner
vessels of ivory, and all manner vessels of most precious wood, and of
brass, and iron, and marble, 18:13 And cinnamon, and odours, and
ointments, and frankincense, and wine, and oil, and fine flour, and
wheat, and beasts, and sheep, and horses, and chariots, and slaves,
and souls of men.

18:14 And the fruits that thy soul lusted after are departed from
thee, and all things which were dainty and goodly are departed from
thee, and thou shalt find them no more at all.

18:15 The merchants of these things, which were made rich by her,
shall stand afar off for the fear of her torment, weeping and wailing,
18:16 And saying, Alas, alas that great city, that was clothed in fine
linen, and purple, and scarlet, and decked with gold, and precious
stones, and pearls!  18:17 For in one hour so great riches is come to
nought. And every shipmaster, and all the company in ships, and
sailors, and as many as trade by sea, stood afar off, 18:18 And cried
when they saw the smoke of her burning, saying, What city is like unto
this great city!  18:19 And they cast dust on their heads, and cried,
weeping and wailing, saying, Alas, alas that great city, wherein were
made rich all that had ships in the sea by reason of her costliness!
for in one hour is she made desolate.

18:20 Rejoice over her, thou heaven, and ye holy apostles and
prophets; for God hath avenged you on her.

18:21 And a mighty angel took up a stone like a great millstone, and
cast it into the sea, saying, Thus with violence shall that great city
Babylon be thrown down, and shall be found no more at all.

18:22 And the voice of harpers, and musicians, and of pipers, and
trumpeters, shall be heard no more at all in thee; and no craftsman,
of whatsoever craft he be, shall be found any more in thee; and the
sound of a millstone shall be heard no more at all in thee; 18:23 And
the light of a candle shall shine no more at all in thee; and the
voice of the bridegroom and of the bride shall be heard no more at all
in thee: for thy merchants were the great men of the earth; for by thy
sorceries were all nations deceived.

18:24 And in her was found the blood of prophets, and of saints, and
of all that were slain upon the earth.

19:1 And after these things I heard a great voice of much people in
heaven, saying, Alleluia; Salvation, and glory, and honour, and power,
unto the Lord our God: 19:2 For true and righteous are his judgments:
for he hath judged the great whore, which did corrupt the earth with
her fornication, and hath avenged the blood of his servants at her
hand.

19:3 And again they said, Alleluia And her smoke rose up for ever and
ever.

19:4 And the four and twenty elders and the four beasts fell down and
worshipped God that sat on the throne, saying, Amen; Alleluia.

19:5 And a voice came out of the throne, saying, Praise our God, all
ye his servants, and ye that fear him, both small and great.

19:6 And I heard as it were the voice of a great multitude, and as the
voice of many waters, and as the voice of mighty thunderings, saying,
Alleluia: for the Lord God omnipotent reigneth.

19:7 Let us be glad and rejoice, and give honour to him: for the
marriage of the Lamb is come, and his wife hath made herself ready.

19:8 And to her was granted that she should be arrayed in fine linen,
clean and white: for the fine linen is the righteousness of saints.

19:9 And he saith unto me, Write, Blessed are they which are called
unto the marriage supper of the Lamb. And he saith unto me, These are
the true sayings of God.

19:10 And I fell at his feet to worship him. And he said unto me, See
thou do it not: I am thy fellowservant, and of thy brethren that have
the testimony of Jesus: worship God: for the testimony of Jesus is the
spirit of prophecy.

19:11 And I saw heaven opened, and behold a white horse; and he that
sat upon him was called Faithful and True, and in righteousness he
doth judge and make war.

19:12 His eyes were as a flame of fire, and on his head were many
crowns; and he had a name written, that no man knew, but he himself.

19:13 And he was clothed with a vesture dipped in blood: and his name
is called The Word of God.

19:14 And the armies which were in heaven followed him upon white
horses, clothed in fine linen, white and clean.

19:15 And out of his mouth goeth a sharp sword, that with it he should
smite the nations: and he shall rule them with a rod of iron: and he
treadeth the winepress of the fierceness and wrath of Almighty God.

19:16 And he hath on his vesture and on his thigh a name written, KING
OF KINGS, AND LORD OF LORDS.

19:17 And I saw an angel standing in the sun; and he cried with a loud
voice, saying to all the fowls that fly in the midst of heaven, Come
and gather yourselves together unto the supper of the great God; 19:18
That ye may eat the flesh of kings, and the flesh of captains, and the
flesh of mighty men, and the flesh of horses, and of them that sit on
them, and the flesh of all men, both free and bond, both small and
great.

19:19 And I saw the beast, and the kings of the earth, and their
armies, gathered together to make war against him that sat on the
horse, and against his army.

19:20 And the beast was taken, and with him the false prophet that
wrought miracles before him, with which he deceived them that had
received the mark of the beast, and them that worshipped his image.
These both were cast alive into a lake of fire burning with brimstone.

19:21 And the remnant were slain with the sword of him that sat upon
the horse, which sword proceeded out of his mouth: and all the fowls
were filled with their flesh.

20:1 And I saw an angel come down from heaven, having the key of the
bottomless pit and a great chain in his hand.

20:2 And he laid hold on the dragon, that old serpent, which is the
Devil, and Satan, and bound him a thousand years, 20:3 And cast him
into the bottomless pit, and shut him up, and set a seal upon him,
that he should deceive the nations no more, till the thousand years
should be fulfilled: and after that he must be loosed a little season.

20:4 And I saw thrones, and they sat upon them, and judgment was given
unto them: and I saw the souls of them that were beheaded for the
witness of Jesus, and for the word of God, and which had not
worshipped the beast, neither his image, neither had received his mark
upon their foreheads, or in their hands; and they lived and reigned
with Christ a thousand years.

20:5 But the rest of the dead lived not again until the thousand years
were finished. This is the first resurrection.

20:6 Blessed and holy is he that hath part in the first resurrection:
on such the second death hath no power, but they shall be priests of
God and of Christ, and shall reign with him a thousand years.

20:7 And when the thousand years are expired, Satan shall be loosed
out of his prison, 20:8 And shall go out to deceive the nations which
are in the four quarters of the earth, Gog, and Magog, to gather them
together to battle: the number of whom is as the sand of the sea.

20:9 And they went up on the breadth of the earth, and compassed the
camp of the saints about, and the beloved city: and fire came down
from God out of heaven, and devoured them.

20:10 And the devil that deceived them was cast into the lake of fire
and brimstone, where the beast and the false prophet are, and shall be
tormented day and night for ever and ever.

20:11 And I saw a great white throne, and him that sat on it, from
whose face the earth and the heaven fled away; and there was found no
place for them.

20:12 And I saw the dead, small and great, stand before God; and the
books were opened: and another book was opened, which is the book of
life: and the dead were judged out of those things which were written
in the books, according to their works.

20:13 And the sea gave up the dead which were in it; and death and
hell delivered up the dead which were in them: and they were judged
every man according to their works.

20:14 And death and hell were cast into the lake of fire. This is the
second death.

20:15 And whosoever was not found written in the book of life was cast
into the lake of fire.

21:1 And I saw a new heaven and a new earth: for the first heaven and
the first earth were passed away; and there was no more sea.

21:2 And I John saw the holy city, new Jerusalem, coming down from God
out of heaven, prepared as a bride adorned for her husband.

21:3 And I heard a great voice out of heaven saying, Behold, the
tabernacle of God is with men, and he will dwell with them, and they
shall be his people, and God himself shall be with them, and be their
God.

21:4 And God shall wipe away all tears from their eyes; and there
shall be no more death, neither sorrow, nor crying, neither shall
there be any more pain: for the former things are passed away.

21:5 And he that sat upon the throne said, Behold, I make all things
new.

And he said unto me, Write: for these words are true and faithful.

21:6 And he said unto me, It is done. I am Alpha and Omega, the
beginning and the end. I will give unto him that is athirst of the
fountain of the water of life freely.

21:7 He that overcometh shall inherit all things; and I will be his
God, and he shall be my son.

21:8 But the fearful, and unbelieving, and the abominable, and
murderers, and whoremongers, and sorcerers, and idolaters, and all
liars, shall have their part in the lake which burneth with fire and
brimstone: which is the second death.

21:9 And there came unto me one of the seven angels which had the
seven vials full of the seven last plagues, and talked with me,
saying, Come hither, I will shew thee the bride, the Lamb's wife.

21:10 And he carried me away in the spirit to a great and high
mountain, and shewed me that great city, the holy Jerusalem,
descending out of heaven from God, 21:11 Having the glory of God: and
her light was like unto a stone most precious, even like a jasper
stone, clear as crystal; 21:12 And had a wall great and high, and had
twelve gates, and at the gates twelve angels, and names written
thereon, which are the names of the twelve tribes of the children of
Israel: 21:13 On the east three gates; on the north three gates; on
the south three gates; and on the west three gates.

21:14 And the wall of the city had twelve foundations, and in them the
names of the twelve apostles of the Lamb.

21:15 And he that talked with me had a golden reed to measure the
city, and the gates thereof, and the wall thereof.

21:16 And the city lieth foursquare, and the length is as large as the
breadth: and he measured the city with the reed, twelve thousand
furlongs.

The length and the breadth and the height of it are equal.

21:17 And he measured the wall thereof, an hundred and forty and four
cubits, according to the measure of a man, that is, of the angel.

21:18 And the building of the wall of it was of jasper: and the city
was pure gold, like unto clear glass.

21:19 And the foundations of the wall of the city were garnished with
all manner of precious stones. The first foundation was jasper; the
second, sapphire; the third, a chalcedony; the fourth, an emerald;
21:20 The fifth, sardonyx; the sixth, sardius; the seventh,
chrysolyte; the eighth, beryl; the ninth, a topaz; the tenth, a
chrysoprasus; the eleventh, a jacinth; the twelfth, an amethyst.

21:21 And the twelve gates were twelve pearls: every several gate was
of one pearl: and the street of the city was pure gold, as it were
transparent glass.

21:22 And I saw no temple therein: for the Lord God Almighty and the
Lamb are the temple of it.

21:23 And the city had no need of the sun, neither of the moon, to
shine in it: for the glory of God did lighten it, and the Lamb is the
light thereof.

21:24 And the nations of them which are saved shall walk in the light
of it: and the kings of the earth do bring their glory and honour into
it.

21:25 And the gates of it shall not be shut at all by day: for there
shall be no night there.

21:26 And they shall bring the glory and honour of the nations into
it.

21:27 And there shall in no wise enter into it any thing that
defileth, neither whatsoever worketh abomination, or maketh a lie: but
they which are written in the Lamb's book of life.

22:1 And he shewed me a pure river of water of life, clear as crystal,
proceeding out of the throne of God and of the Lamb.

22:2 In the midst of the street of it, and on either side of the
river, was there the tree of life, which bare twelve manner of fruits,
and yielded her fruit every month: and the leaves of the tree were for
the healing of the nations.

22:3 And there shall be no more curse: but the throne of God and of
the Lamb shall be in it; and his servants shall serve him: 22:4 And
they shall see his face; and his name shall be in their foreheads.

22:5 And there shall be no night there; and they need no candle,
neither light of the sun; for the Lord God giveth them light: and they
shall reign for ever and ever.

22:6 And he said unto me, These sayings are faithful and true: and the
Lord God of the holy prophets sent his angel to shew unto his servants
the things which must shortly be done.

22:7 Behold, I come quickly: blessed is he that keepeth the sayings of
the prophecy of this book.

22:8 And I John saw these things, and heard them. And when I had heard
and seen, I fell down to worship before the feet of the angel which
shewed me these things.

22:9 Then saith he unto me, See thou do it not: for I am thy
fellowservant, and of thy brethren the prophets, and of them which
keep the sayings of this book: worship God.

22:10 And he saith unto me, Seal not the sayings of the prophecy of
this book: for the time is at hand.

22:11 He that is unjust, let him be unjust still: and he which is
filthy, let him be filthy still: and he that is righteous, let him be
righteous still: and he that is holy, let him be holy still.

22:12 And, behold, I come quickly; and my reward is with me, to give
every man according as his work shall be.

22:13 I am Alpha and Omega, the beginning and the end, the first and
the last.

22:14 Blessed are they that do his commandments, that they may have
right to the tree of life, and may enter in through the gates into the
city.

22:15 For without are dogs, and sorcerers, and whoremongers, and
murderers, and idolaters, and whosoever loveth and maketh a lie.

22:16 I Jesus have sent mine angel to testify unto you these things in
the churches. I am the root and the offspring of David, and the bright
and morning star.

22:17 And the Spirit and the bride say, Come. And let him that heareth
say, Come. And let him that is athirst come. And whosoever will, let
him take the water of life freely.

22:18 For I testify unto every man that heareth the words of the
prophecy of this book, If any man shall add unto these things, God
shall add unto him the plagues that are written in this book: 22:19
And if any man shall take away from the words of the book of this
prophecy, God shall take away his part out of the book of life, and
out of the holy city, and from the things which are written in this book.

22:20 He which testifieth these things saith, Surely I come quickly.
Amen.

Even so, come, Lord Jesus.

22:21 The grace of our Lord Jesus Christ be with you all. Amen


