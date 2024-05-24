--------------------------------------------------------
--  Fichier créé - vendredi-mai-24-2024   
--------------------------------------------------------
--------------------------------------------------------
--  DDL for Table PARTICIPER
--------------------------------------------------------

  CREATE TABLE "YOUSSEF"."PARTICIPER" 
   (	"ID_EVENT" NUMBER, 
	"ID_MEMBRE" NUMBER, 
	"DATE_EVENT" DATE, 
	"MAIL" VARCHAR2(50 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  Constraints for Table PARTICIPER
--------------------------------------------------------

  ALTER TABLE "YOUSSEF"."PARTICIPER" MODIFY ("DATE_EVENT" NOT NULL ENABLE);
  ALTER TABLE "YOUSSEF"."PARTICIPER" MODIFY ("ID_MEMBRE" NOT NULL ENABLE);
  ALTER TABLE "YOUSSEF"."PARTICIPER" MODIFY ("ID_EVENT" NOT NULL ENABLE);
--------------------------------------------------------
--  Ref Constraints for Table PARTICIPER
--------------------------------------------------------

  ALTER TABLE "YOUSSEF"."PARTICIPER" ADD CONSTRAINT "FK_IDEVENT" FOREIGN KEY ("ID_EVENT")
	  REFERENCES "YOUSSEF"."EVENEMENT" ("ID") ENABLE;
  ALTER TABLE "YOUSSEF"."PARTICIPER" ADD CONSTRAINT "FK_IDMEMBRE" FOREIGN KEY ("ID_MEMBRE")
	  REFERENCES "YOUSSEF"."MEMBRE" ("CIN") ENABLE;
